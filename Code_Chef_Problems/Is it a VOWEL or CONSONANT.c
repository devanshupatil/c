#include <stdio.h>

int main(void)
{
    char C; // Character

    scanf("%c", &C);

    if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}
