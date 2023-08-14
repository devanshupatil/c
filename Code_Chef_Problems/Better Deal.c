#include <stdio.h>

int main(void)
{
    int T;    // Denoting the number of tast case
    int A, B; // Denoting the discount of first and second store

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &A, &B);

        if ((100 - A) < 200 * (B * 2)) // If the first store discount is less than secound store discount
        {
            printf("FIRT\n"); // If true , print 'FIRST'
        }
        else if (((100 * A) / 100) - 100 == ((200 * B) / 100) - 200) // If the first store discount is equal to secound store discount
        {
            printf("BOTH\n"); // If true , print 'BOTH'
        }
        else
        {
            printf("SECOND\n"); // If false , print 'SECOND'
        }
    }
    return 0; // Exit the program
}
