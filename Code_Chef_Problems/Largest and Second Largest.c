#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int Size;
        int sum = 0;
        int max = 0;
        scanf("%d", &Size);

        int arr[Size];

        for (int k = 0; k < Size; k++)
        {
            scanf("%d", &arr[k]);
        }

        for (int l = 0; l < Size; l++)
        {
            for (int j = l + 1; j < Size; j++)
            {
                if (arr[l] == arr[j])
                {
                    arr[j] = 0;
                }

                sum = arr[l] + arr[j];

                if (sum > max)
                {
                    max = sum;
                }
            }
        }
        printf("%d\n", max);
    }
    return 0;
}