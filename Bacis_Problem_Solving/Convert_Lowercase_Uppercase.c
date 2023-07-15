#include <stdio.h>

int main()
{
    char lowercsae[] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; lowercsae[i] != '\0'; i++)
    {
        if (lowercsae[i] >= 'a' && lowercsae[i] <= 'z')
        {
            printf("%c", lowercsae[i] - 32);
        }
    }
    return 0;
}