#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *arr[5];
};

struct Array
{
    struct Node *node[5];
};

void *New_node(int key)
{
    struct Node *Pointer = (struct Node *)malloc(sizeof(struct Node));
    Pointer->key = key;
}

int Shortest_Path(struct Array *Graph, int Graph_index, int Shortest_value, int *view_array, int view_index, int count)
{
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if (view_array[i] != i)
        {
            if (Graph->node[Graph_index]->arr[i] != NULL)
            {
                if (Graph->node[Graph_index]->arr[i]->key < Shortest_value)
                {
                    Shortest_value = Graph->node[Graph_index]->arr[i]->key;
                    index = i;
                }
            }
        }
    }

    int temp = 0;

    for (int j = 0; j < 5; j++)
    {
        if (view_array[j] != j)
        {
            if (Graph->node[Graph_index]->arr[j] != NULL)
            {
                temp = Graph->node[Graph_index]->key + Graph->node[Graph_index]->arr[j]->key;
                if (Graph_index != 0)
                {
                    if (Graph->node[Graph_index - 1]->arr[j] != NULL)
                    {
                        if (temp < Graph->node[Graph_index - 1]->arr[j]->key)
                        {
                            Graph->node[j]->key = temp;
                        }
                    }
                }
            }
        }
    }

    view_array[view_index] = Graph->node[Graph_index]->key;
    Graph_index = index;

    count++;
    if (count == 5)
    {
        return 0;
    }
    view_index++;
    Shortest_Path(Graph, Graph_index, 10000, view_array, view_index, count);
}

int main()
{
    struct Array arr;

    arr.node[0] = New_node(0);
    arr.node[1] = New_node(1);
    arr.node[2] = New_node(2);
    arr.node[3] = New_node(3);
    arr.node[4] = New_node(4);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr.node[i]->arr[j] = NULL;
        }
    }

    arr.node[0]->arr[1] = New_node(1);
    arr.node[0]->arr[2] = New_node(7);
    arr.node[0]->arr[3] = New_node(2);
    arr.node[0]->arr[4] = New_node(10000);

    arr.node[1]->arr[0] = New_node(1);
    arr.node[1]->arr[2] = New_node(3);
    arr.node[1]->arr[3] = New_node(10000);
    arr.node[1]->arr[4] = New_node(10000);

    arr.node[2]->arr[0] = New_node(7);
    arr.node[2]->arr[1] = New_node(3);
    arr.node[2]->arr[3] = New_node(5);
    arr.node[2]->arr[4] = New_node(1);

    arr.node[3]->arr[0] = New_node(2);
    arr.node[3]->arr[2] = New_node(5);
    arr.node[3]->arr[4] = New_node(7);
    arr.node[3]->arr[1] = New_node(10000);

    arr.node[4]->arr[2] = New_node(1);
    arr.node[4]->arr[3] = New_node(7);
    arr.node[4]->arr[1] = New_node(1000);
    arr.node[4]->arr[0] = New_node(1000);

    int view_array[5];

    for (int i = 0; i < 5; i++)
    {
        view_array[i] = -1;
    }

    Shortest_Path(&arr, 0, 100000, view_array, 0, 0);

    printf("The shoretst path from 0 to 4 is %d", arr.node[4]->key);

    return 0;
}