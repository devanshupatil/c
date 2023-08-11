#include <stdio.h>

int main(void)
{
    int A, B, C; // Chef prepare topics
    int X;       // The given number of topics

    scanf("%d %d %d %d", &A, &B, &C, &X);

    if (A == X || B == X || C == X) // If chef prepare topics is equal to given number of topics
    {
        printf("YES\n"); // If true , printf 'YES'
    }
    else
    {
        printf("NO\n"); // If false , printf 'NO'
    }
    return 0; // Exit the program
}
