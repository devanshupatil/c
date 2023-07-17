#include <stdio.h>

int main()
{
    char firstName[] = "hii";
    char lastName[] = "hellow";

    for (int i = 0; firstName[i] != '\0'; i++)
    {

        printf(" %c", firstName[i]);
    }
    printf("\n");

    for (int j = 0; lastName[j] != '\0'; j++)
    {

        printf(" %c", lastName[j]);
    }
    printf("\n");
    return 0;
}