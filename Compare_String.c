#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char chr = 'o';

    printf("Enter string :");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == chr)
        {
            printf("Character is present!");
            return 0;
        }
    }
    printf("Character is not present!");
    return 0;
}