#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    struct Node *Strat;
    struct Node *End;
};

struct Node
{
    int data;
    struct Node *next;
};

struct linked_list Initialize()
{

    struct linked_list list;
    struct Node *Node_Pointer = malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &Node_Pointer->data);

    Node_Pointer->next = NULL;
    list.Strat = Node_Pointer;
    list.End = Node_Pointer;
    return list;
}

void Add_Node(struct linked_list *list)
{

    int value;

    struct Node *Node_Pointer = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &value);

    Node_Pointer->data = value;
    Node_Pointer->next = NULL;
    list->End->next = Node_Pointer;
    list->End = Node_Pointer;
}

void Remove_Node()
{
}

int main()
{
    struct linked_list LL;

    int type;
    int count = 0;
    int Num = 0;
    struct Node *Previous_pointer;
    struct Node *Next_pointer;
    int remove;
    while (1)
    {
        printf("1. Initialize  2. Add Node  3. Remove Node  4. Print Node  5. Exit\n");
        printf("Enter Number: ");
        scanf("%d", &type);

        if (type == 1)
        {
            count++;
            LL = Initialize();
        }
        else if (type == 2)
        {
            count++;
            Add_Node(&LL);
        }
        else if (type == 3)
        {
            struct Node *temp;
            printf("Enter count of element you have to remove: ");
            scanf("%d", &remove);

            if (count >= remove)
            {
                temp = LL.Strat;
                Num++;

                for (int i = 0; i < remove; i++)
                {

                    temp = temp->next;
                    Num++;

                    if (Num == (remove - 1))
                    {
                        Previous_pointer = temp;
                    }
                    else if (Num == (remove + 1))
                    {
                        Next_pointer = temp;
                        Previous_pointer->next = Next_pointer;
                        break;
                    }
                    else if (Num == count)
                    {
                        Next_pointer = temp;
                        Previous_pointer->next = NULL;
                        break;
                    }
                }
            }
            else
            {
                printf("Invalid!\n");
            }
        }
        else if (type == 4)
        {
            struct Node *temp;
            printf("%d\n", LL.Strat->data);
            if (LL.Strat->next != NULL)
            {
                temp = LL.Strat->next;

                while (1)
                {
                    printf("%d\n", temp->data);

                    temp = temp->next;

                    if (temp == NULL)
                    {
                        break;
                    }
                }
            }
        }
        else if (type == 5)
        {
            return 0;
        }
        else
        {
            printf("Invalid!\n");
        }
    }

    return 0;
}