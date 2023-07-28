#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of test cases
    int A; // Hole number

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast Case
    {
        scanf("%d", &A);

        if (A % 2 == 0 && A % 7 == 0) //  The numbers which are even, and are a multiple of 7
        {
            printf("Alice \n"); // If true , print 'Alice'
        }
        else if (A % 2 == 1 && A % 9 == 0) // The numbers which are odd, and are a multiple of 9
        {
            printf("Bob \n"); // If true , print 'Bob'
        }
        else
        {
            printf("Charlie \n"); // If false , print 'Charile'
        }
    }
    return 0; // Exit the program
}
