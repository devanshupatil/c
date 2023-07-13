#include <stdio.h>

int main()
{
    char str[100] = "hello";
    int lowercase = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            lowercase = str[i] - 32;
            printf("%c", lowercase);
        }
    }
    printf("\n");

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}