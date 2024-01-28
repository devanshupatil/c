#include <stdio.h>
#include <stdlib.h>
/*Two Binary pointer roots*/
struct Tree
{
    struct Node *Root;
};

/*The node pointer of left child and right child and that's data*/
struct Node
{
    int data;
    struct Node *Right;
    struct Node *Left;
};

int Max_depth(struct Node *node)
{
    if (node == NULL) // If tree is empty
    {
        return 0; // If true, Exit the program
    }
    else
    {
        Max(Max_depth(node->Left), Max_depth(node->Right)); // If false, Call Max function and give left and right node
    }
}
int Max(int L_depth, int R_depth)
{
    if (L_depth > R_depth) // If left node depth is more than right node depth
    {
        return (L_depth + 1); // If true, Add one into left node depth and return
    }
    else
    {
        return (R_depth + 1); // If true, Add one into right node depth and return
    }
}

struct Node *Newnode(int data)
{
    struct Node *pointer = (struct Node *)malloc(sizeof(struct Node)); // Create new node to allocates
    pointer->data = data;                                              // assign data into pointer dada
    pointer->Left = NULL;                                              // assign NULL into pointer left
    pointer->Right = NULL;                                             // assign NULL into pointer left
    return pointer;                                                    //  Return the newly created node
}

int main()
{
    struct Tree tree;

    /*Assign Binary Tree*/
    tree.Root = Newnode(1);

    tree.Root->Left = Newnode(2);
    tree.Root->Right = Newnode(3);
    tree.Root->Left->Right = Newnode(4);
    tree.Root->Right->Right = Newnode(5);
    tree.Root->Right->Right->Right = Newnode(8);

    printf("Hight of binary tree: %d\n", Max_depth(tree.Root)); // print highe of tree and call depth function and give tree

    return 0; // Exit the program
}