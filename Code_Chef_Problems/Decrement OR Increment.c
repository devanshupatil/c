#include <stdio.h>

int main(void)
{
    int N; // Obtain number

    scanf("%d", &N);

    if (N % 4 == 0) // If the number is divisible by 4
    {
        printf("%d", N + 1); // If true , increment its value by 1 and print 'value'
    }
    else
    {
        printf("%d", N - 1); // If false , decrement its value by 1 and print 'value'
    }
    return 0; // Exit the program
}
