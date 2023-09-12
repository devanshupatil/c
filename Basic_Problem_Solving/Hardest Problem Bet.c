#include <stdio.h>

int main(void)
{
    int T;       // Denoting the number of tast case
    int A, B, C; // Integers

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run eacch tast case
    {
        scanf("%d %d %d", &A, &B, &C);

        if (C < B && C < A) // If C less than A & B
        {
            printf("Alice\n"); // If true , print 'Alice'
        }
        else if (B < A && B < C) // If B less than A & C
        {
            printf("Bob\n"); // If true , print 'Bob'
        }
        else
        {
            printf("Draw\n"); // If false , print , 'Draw'
        }
    }
    return 0; // Exit the program
}
