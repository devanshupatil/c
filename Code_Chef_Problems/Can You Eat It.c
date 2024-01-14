#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // The length of candy
    int K; // The length of candy during each bite exactly

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &K);
        int count = 0;
        int temp = N;

        while (temp > 0) // If temp value is more than zero
        {
            temp = temp - K; // If true, Assign temp Subtracted value with k into temp
            count++;         // Add one in count
        }

        if (N == 0) // If N is equal to 0
        {
            printf("0\n"); // If true, print '0'
        }
        else if (temp < 0) // If temp is less than 0
        {
            printf("-1\n"); // If true, print '-1'
        }
        else
        {
            printf("%d\n", count); // If false, print count value
        }
    }
    return 0; // Exit the program
}
