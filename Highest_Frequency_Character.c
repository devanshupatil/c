#include <stdio.h>

int main()
{
    char str[100] = "hello";
    int arr[100] = {0};
    int max = 0;
    int maxindex = 0;
    int highestfreq;

    for (int i = 0; str[i] != '\0'; i++)
    {
        arr[str[i] - 97] = arr[str[i] - 97] + 1;
    }

    max = arr[0];
    maxindex = arr[0];

    for (int j = 1; j < 100; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            maxindex = j;
        }
    }

    highestfreq = maxindex + 97;

    printf(" %c = %d", highestfreq, max);
    return 0;
}