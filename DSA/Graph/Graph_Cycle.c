/*
Q. Determine if a graph has a cycle: Given an undirected graph, use the adjacency list
    to determine if it has a cycle. You can do this by iterating over
    each node in the graph and checking if there is a path from that node
    to every other node in the graph. If there is, then the graph has a cycle;
    otherwise, it does not.
*/

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

void DFS(struct Array *graph, int *View_Arr, char *string, int view_Index, int graph_index, int *child_arr, int child_index)
{

    string[graph->node[graph_index]->key] = 'T'; // 0 = T
    View_Arr[view_Index] = graph->node[graph_index]->key;
    view_Index++;

    // check
    for (int l = 0; l < 6; l++)
    {
        if (graph->node[graph_index]->arr[l] != NULL)
        {
            child_arr[l] = graph->node[graph_index]->arr[l]->key;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (graph->node[graph_index]->arr[i] != NULL)
        {
            if (string[graph->node[graph_index]->arr[i]->key] == 'T')
            {
                if (View_Arr[graph->node[graph_index]->arr[i]->key] != graph->node[graph_index]->arr[i]->key)
                {
                    printf("This is circular graph!\n");
                    return 0;
                }
            }
        }
    }

    for (int j = 0; j < 6; j++)
    {
        if (graph->node[graph_index]->arr[j] != NULL)
        {
            string[graph->node[graph_index]->arr[j]->key] = 'T'; // 0 -- 1 = T
        }
    }

    if (child_arr[child_index] != -1)
    {
        graph_index = child_arr[child_index];
        child_index++;
    }
    else
    {
        printf("This is not circular graph!");
        return 0;
    }
    DFS(graph, View_Arr, string, view_Index, graph_index, child_arr, child_index);
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
    arr.node[1]->arr[2] = New_node(5);

    arr.node[2]->arr[0] = New_node(1);
    arr.node[2]->arr[1] = New_node(3);
    arr.node[2]->arr[2] = New_node(4);

    arr.node[3]->arr[0] = New_node(2);

    arr.node[4]->arr[0] = New_node(2);

    arr.node[5]->arr[0] = New_node(1);

    int View_Arr[6];
    char string[6];
    int child_arr[6];
    for (int i = 0; i < 6; i++)
    {
        View_Arr[i] = -1;
        child_arr[i] = -1;
        string[i] = '\0';
    }

    DFS(&arr, View_Arr, string, 0, 0, child_arr, 0);

    return 0;
}