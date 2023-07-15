#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char Newstr[100];

    int j = 0;

    printf("Enetr char :");
    scanf("%s", str);

    for (int i = 3; i <= 6; i++, j++)
    {
        Newstr[j] = str[i];
    }

    Newstr[j] = '\0';
    puts(Newstr);

    return 0;
}