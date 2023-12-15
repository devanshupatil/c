#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *lift, *right;
};

struct Node *create()
{
    int x;
    struct Node *newNode;
    newNode = (struct Node *)malloc(5 * sizeof(struct Node));

    printf("Note :- Enetr -1 for Exit \n");
    printf("Enetr data: ");
    scanf("%d", &x);

    if (x == -1)
    {
        return 0;
    }

    newNode->data = x;

    printf("Enetr lifet child of %d", x);
    newNode->lift = create();
}

void main()
{
    struct Node *root;
    root = NULL;
    root = create();
}