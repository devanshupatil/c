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

void Create_Node(struct Tree *tree, struct Tree_Node *parent, char position)
{

    int value;
    char Is_left_requared;
    char Is_right_requared;

    struct Tree_Node *Pointer = (struct Tree_Node *)malloc(sizeof(struct Tree_Node));
    printf("Enter value: ");
    scanf("%d", &Pointer->data);

    if (parent == NULL)
    {
        tree->Root = Pointer;
    }

    if (parent != NULL)
    {
        if (position == 'L')
        {
            parent->Left = Pointer;
        }

        if (position == 'R')
        {
            parent->Right = Pointer;
        }
    }

    printf("If you want to add in left: ");
    getchar();
    scanf("%c", &Is_left_requared);

    if (Is_left_requared == 'Y' || Is_left_requared == 'y')
    {
        Create_Node(tree, Pointer, 'L');
    }

    printf("If you want to add in right: ");
    getchar();
    scanf("%c", &Is_right_requared);

    if (Is_right_requared == 'Y' || Is_right_requared == 'y')
    {
        Create_Node(tree, Pointer, 'R');
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
            Create_Node(&tree, NULL, 'T');
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