#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int integer;
    char Character;
    float floats;
};

struct List_Item
{
    struct Data data;
    int type;
};

struct List // Array
{
    int Capacity; // Increasing
    int index_number;
    struct List_Item *ptr;
};

void add(struct List *list)
{
    struct List_Item *tem_ptr;
    list->Capacity += 5;
    tem_ptr = (struct List *)malloc(list->Capacity * sizeof(struct List)); // New list

    // Assigning old list element to new list element
    for (int i = 0; i < list[0].index_number; i++)
    {
        tem_ptr[i].type = list->ptr[i].type;

        if (list->ptr[i].type == 1)
        {
            tem_ptr[i].data.integer = list->ptr[i].data.integer;
        }
        if (list->ptr[i].type == 2)
        {
            tem_ptr[i].data.Character = list->ptr[i].data.Character;
        }
        if (list->ptr[i].type == 3)
        {
            tem_ptr[i].data.floats = list->ptr[i].data.floats;
        }
    }

    free(list->ptr);
    list->ptr = tem_ptr;
}
void typeInteger(struct List *list)
{
    list->ptr->type = 1;
    printf("Enetr integer : ");
    scanf("%d", &list->ptr[list->index_number].data.integer);
}

void typeCharacter(struct List *list)
{
    list->ptr->type = 2;
    printf("Enetr Character: ");
    scanf("%d", &list->ptr[list->index_number].data.Character);
}

void typeFloat(struct List *list)
{
    list->ptr->type = 3;
    printf("Enetr float : ");
    scanf("%d", &list->ptr[list->index_number].data.floats);
}

void print_list(struct List *list)
{
    for (int i = 0; i < list->index_number + 1; i++)
    {
        printf("Type: %d\n", list->ptr[i].type);

        if (list->ptr[i].type == 1)
        {
            printf("Value: %d\n", list->ptr[i].data.integer);
        }
        else if (list->ptr[i].type == 2)
        {
            printf("Character: %c\n", list->ptr[i].data.Character);
        }
        else if (list->ptr[i].type == 3)
        {
            printf("Float: %d\n", list->ptr[i].data.floats);
        }
    }
}
int main()
{
    struct List list;

    list.index_number = 0;
    list.Capacity = 1;
    int data_type;

    list.ptr = (struct List *)malloc(list.Capacity * sizeof(struct List));

    while (1)
    {
        printf("0. Exit  1. Integer  2. character  3. Float\n");
        printf("********************************************\n");
        printf("Enetr type : ");
        scanf("%d", &data_type);

        if (data_type == 0)
        {
            break;
        }
        if (list.index_number == list.Capacity)
        {
            add(&list);
        }
        if (data_type == 1)
        {
            typeInteger(&list);
        }
        if (data_type == 2)
        {
            typeCharacter(&list);
        }
        if (data_type == 3)
        {
        }

        print_list(&list);
        list.index_number++;
    }
    return 0;
}
