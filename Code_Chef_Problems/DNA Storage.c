#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        int arr[N];

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int k = 0; k < N; k += 2)
        {
            if (arr[k] == 0 && arr[k + 1] == 0)
            {
                printf("A");
            }
            else if (arr[k] == 0 && arr[k + 1] == 1)
            {
                printf("T");
            }
            else if (arr[k] == 1 && arr[k + 1] == 0)
            {
                printf("C");
            }
            else if (arr[k] == 1 && arr[k + 1] == 1)
            {
                printf("G");
            }
        }
        printf("\n");
    }
    return 0;
}
