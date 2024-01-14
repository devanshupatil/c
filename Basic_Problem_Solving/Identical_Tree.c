#include <stdio.h>
#include <stdlib.h>
/*Two Binary pointer roots*/
struct Tree
{
    struct New_Node *Root1;
    struct New_Node *Root2;
};

/*The node pointer of left child and right child and that's data*/
struct New_Node
{
    int data;
    struct New_Node *Right;
    struct New_Node *Left;
};

void *Newnode(int data)
{
    struct New_Node *pointer = (struct New_Node *)malloc(sizeof(struct New_Node)); // Create new node to allocates
    pointer->data = data;                                                          // assign data into pointer dada
    pointer->Left = NULL;                                                          // assign NULL into pointer left
    pointer->Right = NULL;                                                         // assign NULL into pointer left
}
int Identical_Tree(struct New_Node *a, struct New_Node *b)
{
    if (a == NULL && b == NULL) // If a and b is equal to NULL
    {
        return 1; // If true, return 1
    }

    if (a != NULL && b != NULL) // If a and b is not equal to NULL
    {
        return (a->data == b->data && Identical_Tree(a->Left, b->Left) && Identical_Tree(a->Right, b->Right)); // If true, return Comparison of both trees
    }
}

int main()
{
    struct Tree tree;

    /* Assign First Tree value*/
    tree.Root1 = Newnode(1);
    tree.Root1->Left = Newnode(2);
    tree.Root1->Right = Newnode(7);

    /*Assign Second Tree value*/
    tree.Root2 = Newnode(1);
    tree.Root2->Left = Newnode(2);
    tree.Root2->Right = Newnode(10);

    /*Function call and pass first tree and second tree*/

    if (Identical_Tree(tree.Root1, tree.Root2)) // If both tree are same in data
    {
        printf("Both tree are identical!"); // If true, print 'Both tree are identical!'
    }
    else
    {
        printf("Both tree are non-identical!"); // If false, print 'Both tree are non-identical!'
    }

    return 0; // Exit the program
}