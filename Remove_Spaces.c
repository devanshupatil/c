#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];

    printf("Enter string :");
    fgets(str1, 100, stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != 32)
        {
            printf("%c", str1[i]);
        }
    }
    return 0;
}