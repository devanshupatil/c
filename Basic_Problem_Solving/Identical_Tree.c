#include <stdio.h>
#include <stdlib.h>

struct Tree
{
    struct New_Node *Root1;
    struct New_Node *Root2;
};

struct New_Node
{
    int data;
    struct New_Node *Right;
    struct New_Node *Left;
};

void *Newnode(int data)
{
    struct New_Node *pointer = (struct New_Node *)malloc(sizeof(struct New_Node));
    pointer->data = data;
    pointer->Left = NULL;
    pointer->Right = NULL;
}
int Indentical_Tree(struct New_Node *a, struct New_Node *b)
{
    if (a == NULL && b == NULL)
    {
        printf("Both Tree are emty!\n");
        return 0;
    }

    if (a != NULL && b != NULL)
    {
        if (a->data == b->data && a->Left == b->Left && a->Right == b->Right)
        {
            printf("Both tree are indentical!\n");
        }
        else
        {
            printf("Both tree are non-indentical!\n");
        }
    }
}

int main()
{
    struct Tree tree;
    tree.Root1 = Newnode(1);
    tree.Root2 = Newnode(1);
    tree.Root1->Left = Newnode(2);
    tree.Root2->Right = Newnode(6);
    tree.Root2->Left = Newnode(2);
    tree.Root1->Right = Newnode(6);

    Indentical_Tree(tree.Root1, tree.Root2);

    return 0;
}