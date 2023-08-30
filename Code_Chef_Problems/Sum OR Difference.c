#include <stdio.h>

int main(void)
{
    int N1, N2;

    scanf("%d %d", &N1, &N2);

    if (N1 > N2) // If the first number is greater than the second number
    {
        printf("%d", N1 - N2); // If true , print difference of two number
    }
    else
    {
        printf("%d", N1 + N2); // If false , print sum of two number
    }
    return 0; // Exit the program
}
