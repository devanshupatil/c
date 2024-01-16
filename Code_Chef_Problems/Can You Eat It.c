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

        int temp = N % K; // The modulo of N
        if (N == 0)       // If N is equal to 0
        {
            printf("0\n"); // If true, print '0'
        }
        else if (temp == 0) // If temp if equal to 0
        {
            printf("%d\n", N); // If true, print N value
        }
        else
        {
            printf("-1\n"); // If false, print '-1'
        }
    }
    return 0; // Exit the program
}
