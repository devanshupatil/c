#include <stdio.h>

int main(void)
{
    int T; // The number of test cases
    int X; // The most number of guards
    int Y; // The number of guards

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d", &X, &Y);

        if (X >= Y) // The most number of guards is equal and more than number of guards
        {
            printf("YES \n"); // If true , print 'YES'
        }

        else
        {
            printf("NO \n"); //  If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
