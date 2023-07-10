#include <stdio.h>

int main()
{
    char firstName[100];
    char lastName[100];

    printf("Enter first name :");
    scanf("%c", firstName);

    printf("Enter last name :");
    scanf("%c", lastName);

    for (int i = 0; firstName[i] != '\0'; i++)
    {
        printf("%c", firstName[i]);
    }

    for (int j = 0; lastName[j] != '\0'; j++)
    {
        printf("%c", lastName[j]);
    }
}