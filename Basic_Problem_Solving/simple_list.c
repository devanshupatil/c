#include <stdio.h>
#include <stdlib.h>

struct Data
{
    int integer;
    char Character;
    float floats;
};

struct List_Items
{
    struct Data data;
    int type;
};

struct List // Array
{
    int Capacity;
    int index_number;
    int *ptr;
};

struct List_Items item[100];
struct List list;

void add()
{
    list.Capacity += 100;
    list.ptr = (struct List_Items *)malloc(list.Capacity * sizeof(struct List_Items));
}

void getInput()
{
    printf("Enetr type : ");
    scanf("%d", &item[list.index_number].type);
}

int typeInteger()
{
    printf("Enetr integer : ");
    scanf("%d", &item[list.index_number].data.integer);
}

char typeCharacter()
{

    printf("Enetr Character: ");
    scanf("%d", &item[list.index_number].data.Character);
}

float typeFloat()
{

    printf("Enetr float : ");
    scanf("%d", &item[list.index_number].data.floats);
}

int main()
{
    list.index_number = 0;
    list.Capacity = 1;

    printf("0. Exit  1. Integer  2. character  3. Float\n");
    printf("********************************************\n");
    getInput();

    while (list.index_number != list.Capacity)
    {
        if (item[list.index_number].type == 1)
        {
            typeInteger();
        }
        else if (item[list.index_number].type == 2)
        {
            typeCharacter();
        }
        else if (item[list.index_number].type == 3)
        {
        }
        else if (item[list.index_number].type == 0)
        {
            break;
        }

        list.index_number++;

        if (list.index_number == list.Capacity)
        {
            add();
        }
        else if (list.index_number != list.Capacity)
        {
            getInput();
        }
    }

    return 0;
}
