#include <stdio.h>

struct List
{
    int integer;
    char Character;
    float floats;
};

int main()
{
    struct List type[100];

    int Number;
    int index_number = 0;

    printf("0. Exit  1. char  2. int  3. float\n");
    printf("*****************************\n");
    printf("Enter number of data type : ");
    scanf("%d", &Number); // Taking input

    while (Number != 0) // If number if not equal to 0
    {
        if (index_number == 100) // If index number is equal to 100
        {
            index_number += 100;            // If true, Add 100 into index number variable
            struct List type[index_number]; // If true, Increasing struct size by 100
        }
        else if (Number == 1) // If the number is 1
        {
            printf("Enter integer value : ");
            scanf("%d", &type[index_number].integer); // If true, Take input in struct integer
            index_number++;                           // If true, Index number add by one
        }
        else if (Number == 2) // If the number is 2
        {
            printf("Enter character value : ");
            getchar();
            scanf("%c", &type[index_number].Character); // If true, Take input in struct character
            index_number++;                             // If true, Index number add by one
        }
        else if (Number == 3) // If the number is 3
        {
            printf("Enter float value : ");
            scanf("%f", &type[index_number].floats); // If true, Take input in struct float
            index_number++;                          // If true, Index number add by one
        }
        else
        {
            printf("INVALID NUMBER!\n"); // If false, print 'INVALID NUMBER!'
        }

        printf("Enter number of data type : ");
        scanf("%d", &Number); // Taking input
    }

    return 0; // Exit the program
}