#include <stdio.h>

int main(void)
{
    int T; // Denorting the number of  tast case
    int M; // Chef exam will start exactly minutes
    int N; // The episodes of Season - 1 of Superchef
    int K; // Each episode time

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &M, &N, &K);

        if (K * N < M) // If Total episodes time is less than exam start time
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
