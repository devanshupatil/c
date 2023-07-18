#include <stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    char chr;

    printf("Enter f for french & i for indian :");
    scanf("%c", &chr);

    if (chr == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
    return 0;
}

void printNamaste()
{
    printf("Namaste");
}

void printBonjour()
{
    printf("Bonjour");
}