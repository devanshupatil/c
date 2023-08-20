#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of empty bottles
    int X; // Number of capacity of each bottles
    int K; // Number of liters of water in water tank
    int divide = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tase case
    {
        scanf("%d %d %d", &N, &X, &K);

        divide = K / X; // Calculating the how many bottles we cha fill

        if (X > K) // If the capacity of bottles is more than liters of water in water tank
        {
            printf("0\n"); // If true , print '0'
        }
        else if (divide >= N) // If number of bottles we can fill is more than number of bottles
        {
            printf("%d\n", N); // If true , print 'number of bottles'
        }
        else
        {
            printf("%d\n", divide); // If false , print 'number of bottles we can fill'
        }
    }
    return 0; // Exit the program
}
