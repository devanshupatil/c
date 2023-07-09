#include <stdio.h>
#include <stralign.h>

int main()
{
    char firstName[10];
    char lastName[10];

    printf("Enter string 1 :");
    scanf("%c", &firstName);

    printf("Enter string 2 :");
    scanf("%c", &lastName);

    for (int i = 0; firstName[i] != '\0'; i++)
    {

        printf("fristName = %c", firstName[i]);
    }

    for (int j = 0; lastName[j] != '\0'; j++)
    {

        printf("LastNumber = %c", lastName[j]);
    }

    return 0;
}