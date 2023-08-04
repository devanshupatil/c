#include <stdio.h>

int main(void)
{
    char arr[100];
    int T; // Denoting number of test cases
    int N; // List of contest code
    int n;
    int count1 = 0;
    int count2 = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        count1 = 0;
        count2 = 0;

        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            scanf("%s", &arr[j]);

            for (int k = 0; k < 100; k++)
            {
                if (arr[k] == 51 && arr[k + 1] == 56)
                {
                    count1++;
                }

                if (arr[k] == 49 && arr[k + 1] == 48 && arr[k + 2] == 56)
                {
                    count2++;
                }
            }
        }
        printf("%d %d \n", count1, count2);
    }

    return 0;
}
