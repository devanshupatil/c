#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;
    char vowels = 0;

    printf("Enter string :");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    printf("Vowels are in string = %d", count);

    return 0;
}