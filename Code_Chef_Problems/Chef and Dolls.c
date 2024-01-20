#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of dolls

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] == arr[j]) // If array of one index value is equal to array of any index value
                {
                    /*Assign 0 to both value if there are same in array*/
                    arr[i] = 0;
                    arr[j] = 0;
                }
            }
        }

        for (int k = 0; k < N; k++)
        {
            if (arr[k] != 0) // If array of kth index value is not equal to 0
            {
                printf("%d\n", arr[k]); // If true, print array of kth index value
            }
        }
    }

    return 0; // Exit the program
}
