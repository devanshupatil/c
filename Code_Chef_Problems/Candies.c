#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of different cities

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);
        int Arr[N * 2];
        int count = 0;

        for (int i = 0; i < N * 2; i++)
        {
            scanf("%d", &Arr[i]);
        }

        for (int i = 0; i < N * 2; i++)
        {
            for (int j = i + 1; j < N * 2; j++)
            {
                if (Arr[i] == Arr[j]) // If array of one index value is equal to array of any index value
                {
                    count++; // If true, add by one
                }
            }
        }

        if (count > 2) // If count value is more than 2
        {
            printf("No\n"); // If true, print 'No'
        }
        else
        {
            printf("Yes\n"); // If false, print 'Yes'
        }

        return 0; // Exit the program
    }
}
