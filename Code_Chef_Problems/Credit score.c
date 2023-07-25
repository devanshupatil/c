#include <stdio.h>

int main(void)
{

    int X; // The credit score

    scanf("%d", &X);

    if (X >= 750) // The credit score is equal and more than 750
    {
        printf("YES \n"); // If true , print 'YES'
    }

    else
    {
        printf("NO \n"); // If false , print 'NO'
    }

    return 0; // Exit the program
}
