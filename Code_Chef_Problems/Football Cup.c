#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of test cases
    int X; // The goals scored by each team
    int Y; // The goals scored by each team

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d", &X, &Y);

        if (X == Y && X != 0) // If both teams goals are same
        {
            printf("YES \n"); // If true , print 'YES'
        }

        else
        {
            printf("NO \n"); // If false , print 'NO'
        }
    }
    return 0;
}
