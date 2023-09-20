#include <stdio.h>

int main(void)
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B || A == C || B == C) // If 2 integers value is same
    {
        printf("YES\n"); // If true, print 'YES'
    }
    else
    {
        printf("NO\n"); // If false, print 'NO'
    }
    return 0; // Exit the program
}
