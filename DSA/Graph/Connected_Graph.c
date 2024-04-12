#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *arr[6];
};
struct Array
{
    struct Node *node[6];
};

void *New_node(int key)
{
    struct Node *Pointer = (struct Node *)malloc(sizeof(struct Node));
    Pointer->key = key;
}

int Is_Connected(struct Array *graph, int Value_one, int Value_two)
{
    for (int i = 0; i < 6; i++)
    {
        if (graph->node[i] != NULL)
        {
            if (graph->node[i]->key == Value_one)
            {
                for (int j = 0; j < 6; j++)
                {
                    if (graph->node[i]->arr[j] != NULL)
                    {
                        if (graph->node[i]->arr[j]->key == Value_two)
                        {
                            printf("This is connected graph!\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("This is non-connected graph!\n");
    return 0;
}
int main()
{
    struct Array arr;

    arr.node[0] = New_node(0);
    arr.node[1] = New_node(1);
    arr.node[2] = New_node(2);
    arr.node[3] = New_node(3);
    arr.node[4] = New_node(4);
    arr.node[5] = New_node(5);

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr.node[i]->arr[j] = NULL;
        }
    }

    arr.node[0]->arr[0] = New_node(1);
    arr.node[0]->arr[1] = New_node(5);

    arr.node[1]->arr[0] = New_node(0);
    arr.node[1]->arr[1] = New_node(2);
    arr.node[1]->arr[2] = New_node(4);

    arr.node[2]->arr[0] = New_node(1);
    arr.node[2]->arr[1] = New_node(3);
    arr.node[2]->arr[2] = New_node(4);

    arr.node[3]->arr[0] = New_node(2);

    arr.node[4]->arr[0] = New_node(2);
    arr.node[4]->arr[1] = New_node(1);

    arr.node[5]->arr[0] = New_node(1);

    Is_Connected(&arr, arr.node[1]->key, arr.node[4]->key);

    return 0;
}