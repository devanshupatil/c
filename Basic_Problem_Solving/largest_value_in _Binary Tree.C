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

int Max(int L_depth, int R_depth)
{
    if (L_depth > R_depth) // If left node depth is more than right node depth
    {
        return (L_depth); // If true, Add one into left node depth and return
    }
    else
    {
        return (R_depth); // If true, Add one into right node depth and return
    }
}
int Max_depth(struct Node *node)
{
    if (node == NULL) // If tree is empty
    {
        return 0; // If true, Exit the program
    }
    else
    {
        int height = Max(Max_depth(node->Left), Max_depth(node->Right)) + 1; // If false, Call Max function and give left and right node
        // compure find max value in node.date and d_array[height - 1], push to d_array[height - 1]
        return height;
    }
}

int Max_depth_modifide(struct Node *node, int *arr, int level)
{
    // get index for array
    int idx = level - 1;

    if (node->data > arr[idx])
    {
        arr[idx] = node->data;
    }
    if (node->Left != NULL)
    {
        Max_depth_modifide(node->Left, arr, level + 1);
    }
    if (node->Right != NULL)
    {
        Max_depth_modifide(node->Right, arr, level + 1);
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

    int arr_size = Max_depth(tree.Root);
    printf("Hight of binary tree: %d\n", arr_size); // print highe of tree and call depth function and give tree
    int arr[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = 0;
    }

    Max_depth_modifide(tree.Root, arr, 1);
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Free the address of tree node

    free(tree.Root);
    free(tree.Root->Left);
    free(tree.Root->Right);
    free(tree.Root->Left->Right);
    free(tree.Root->Right->Right);
    free(tree.Root->Right->Right->Right);

    return 0; // Exit the program
}