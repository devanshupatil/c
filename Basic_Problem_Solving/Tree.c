#include <stdio.h>
#include <stdlib.h>

struct Tree_Node
{
    int data;
    struct Tree_Node *Left;
    struct Tree_Node *Right;
};

struct Tree
{
    struct Tree_Node Root;
};

void Create_Node(struct Tree *T)
{

    int value;
    int decision;
    int count = 0;

    count++;

    if (count == 1)
    {
        struct Tree_Node *Pointer = (struct Tree_Node *)malloc(sizeof(struct Tree_Node));
        printf("Enter value: ");
        scanf("%d", &Pointer->data);
        T->Root.data = Pointer->data;
    }

    printf("YES of 1 or NO of 0 or No one of 00 only\n");
    printf("You what to strore data in lifet node: ");
    scanf("%d", &decision);

    printf("Enter value: ");
    scanf("%d", &value);

    struct Tree_Node *Pointer = (struct Tree_Node *)malloc(sizeof(struct Tree_Node));

    if (decision == 1)
    {
        Pointer->data = value;
        T->Root.Left = Pointer;
    }
    else if (decision == 0)
    {
        Pointer->data = value;
        T->Root.Right = Pointer;
    }
    else if (decision == 00)
    {
    }
}

int main()
{
    struct Tree tree;

    int type;

    while (1)
    {
        printf("1. Add_Node  2. Print Node  3. Exit\n");
        printf("Enter Number: ");
        scanf("%d", &type);

        if (type == 1)
        {
            Create_Node(&tree);
        }
        else if (type == 2)
        {
        }
        else if (type == 3)
        {
            return 0;
        }
    }

    return 0;
}