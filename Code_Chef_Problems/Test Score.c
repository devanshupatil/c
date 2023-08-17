#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of problem
    int X; // Marks of each problem
    int Y; // The score of chef wants

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tase case
    {
        scanf("%d %d %d", &N, &X, &Y);

        if (Y % X == 0) // If the marks of each problem modulo score of chef wants is equal to 0
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // IF false , print 'NO'
        }
    }
    return 0; // Exit the program
}
