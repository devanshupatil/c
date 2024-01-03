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
    struct Tree_Node *Root;
};

int count = 0;
void Create_Node(struct Tree *tree, struct Tree_Node *parent, char position)
{

    int value;

    struct Tree_Node *Pointer = (struct Tree_Node *)malloc(sizeof(struct Tree_Node));
    printf("Enter value: ");
    scanf("%d", &Pointer->data);

    count++;

    if (count == 1)
    {
        tree->Root = Pointer;
    }

    getchar();
    printf("If you want to add in lifet: ");
    scanf("%s", &position);

    if (position == 'Y' || position == 'y')
    {
        Create_Node(tree, Pointer, 'L');
    }

    getchar();
    printf("If you want to add in right: ");
    scanf("%s", &position);

    if (position == 'Y' || position == 'y')
    {
        Create_Node(tree, Pointer, 'L');
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
            Create_Node(&tree, NULL, 'r');
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