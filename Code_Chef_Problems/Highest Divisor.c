#include <stdio.h>

int main(void)
{
    int N;
    int count;
    int max1 = 0;

    scanf("%d", &N);
    int arr[10] = {0};

    for (int i = 1; i <= 10; i++)
    {
        if (N % i == 0)
        {
            if (i >= 1 && i <= 10)
            {
                arr[count] = i;
                count++;
            }
        }
    }

    max1 = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    printf("%d", max1);
    return 0;
}
