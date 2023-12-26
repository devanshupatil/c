#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int data; // node Increase
    struct linked_list *next;
};
typedef struct LinkedList *node; // Define node as pointer of data type struct LinkedList

node Create_Node()
{
    struct linked_list list;
    node *temp;
    temp = (node)malloc(sizeof(struct linked_list));
    list.next = NULL;
    temp = list.next;
    return temp;
}

node Add_Node()
{
    struct linked_list list;
    int value;
    node head;
    node temp, p;

    printf("Enter value: ");
    scanf("%d", &value);

    temp = Create_Node();
    list.data = value;
    temp = list.data;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head;

        while (list.next != NULL)
        {
            p = list.next;
        }

        p = temp;
    }
    return head;
}

int main()
{
    struct linked_list list;

    int type;

    while (1)
    {
        printf("1. Add node  2. Exit \n");
        printf("Enter the  number: ");
        scanf("%d", &type);

        if (type == 1)
        {
            Create_Node();
            Add_Node();
        }
        else if (type == 2)
        {
            return 0;
        }
        else
        {
            printf("Invalid!");
        }
    }
    return 0;
}