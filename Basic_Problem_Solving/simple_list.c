#include <stdio.h>

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
    int Capacity;
    int index_number;
    int *ptr;
};

void CreateList() // Create arrya requ size and assign to pointer of size
{
}

// grow list

void getInput();
void listSize();

int EnterInteger()
{
    struct List_Item type[100];
    printf("Enter integer value : ");
    scanf("%d");
}

char EnterCharacter()
{
    struct List_Item type[100];
    printf("Enter character value : ");
    scanf("%c", &type[index_number].data.Character);
}

float EnterFloat()
{
    struct List_Item type[100];
    printf("Enter float value : ");
    scanf("%f", &type[index_number].data.floats);
}

int main()
{
    struct List_Item type[100];
    printf("0. Exit  1. char  2. int  3. float\n");
    printf("*****************************\n");
    getInput();

    while (type[index_number].type != 0)
    {
        if (index_number == Capacity)
        {
            listSize();
        }
        else if (type[index_number].type == 1)
        {
            EnterInteger();
        }
        else if (type[index_number].type == 2)
        {
            getchar();
            EnterCharacter();
        }
        else if (type[index_number].type == 3)
        {
            EnterFloat();
        }
        else
        {
            printf("INVALID NUMBER!\n");
        }

        index_number++;
        getInput();
    }

    return 0;
}

void getInput()
{
    struct List_Item type[100];
    printf("Enter number of data type : ");
    scanf("%d", &type[index_number].type);
}

// void listSize()
// {
// }