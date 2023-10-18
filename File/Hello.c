/* Quiz:-
    1. Create a struct, Questions
        - In the struct, question
        - In the struct, option
        - In the struct, answer

    2. opent the file in main

    3. take char into ch and read in file

    4. Take decicion in while loop
        - If the ch is not equal to end of file (EOF)

    5. Create a function, questions
        - Take decicion in if
        - if ch is equal to 'Q'
            -
        - if ch is equal to '}' exit the function

    6. Create a function, Options
        - Take decicion in if
        - if ch is equal to 'O' assign each option charectar by ch into struct opation A,B,C and D
        - if ch is equal to ',' switch assign each option charectar by ch into struct opation in B and up to D
        - if ch is equal to '}' Exit the fumction

    7. Create a function, Answer
        - The decision in if
        - If the ch is equal to 'A' assign each answer charectar by ch into struct answer
        - if ch is equal to '}' Exit the fumction

*/

/* list :-
    1. Create a struct, list
        - In the struct, integer
        - In the struct, Character
        - In the struct, floats
    2. In main call struct list into type
        - Take int into number variable
        - Take variable
        - Take input into number variable
        - Print Note:- "0. Exit  1. char  2. int  3. float
        - Take a while loop
        - In while loop condition (If the number is not equal to 0)
        - In loop take decision
        - If the index number is equal to 100
        - Increase by 100, size of index number

        def


git clone
*/

#include <stdio.h>

struct List
{
    int integer;
    char Character;
    float floats;
};

int main()
{
    struct List type[1];

    int Number;
    int index_number = 0;

    printf("0. Exit  1. char  2. int  3. float\n");
    printf("*****************************\n");
    printf("Enter number of data type : ");
    scanf("%d", &Number); // Taking input

    while (Number != 0) // If number if not equal to 0
    {
        if (index_number == 1) // If index number is equal to 100
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