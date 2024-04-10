#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *arr[100];
};
struct Array
{
    struct Node *node[100];
};

void *New_node(int key)
{
    struct Node *Pointer = (struct Node *)malloc(sizeof(struct Node));
    Pointer->key = key;
}

int main()
{
    struct Array arr;

    arr.node[0] = New_node(0);
    arr.node[1] = New_node(1);
    arr.node[2] = New_node(2);
    arr.node[3] = New_node(3);
    arr.node[4] = New_node(4);

    arr.node[0]->arr[0] = New_node(1);
    arr.node[0]->arr[1] = New_node(2);

    arr.node[1]->arr[0] = New_node(0);
    arr.node[1]->arr[1] = New_node(2);
    arr.node[1]->arr[2] = New_node(3);

    arr.node[2]->arr[0] = New_node(0);
    arr.node[2]->arr[1] = New_node(1);
    arr.node[2]->arr[2] = New_node(4);

    arr.node[3]->arr[0] = New_node(1);

    arr.node[4]->arr[0] = New_node(2);

    return 0;
}