#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // number

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        if (N > 65) // If N is more than 65
        {
            printf("Overload\n"); // If true , print 'Overload'
        }
        else if (N < 35) // If N is less than 35
        {
            printf("Underload\n"); // If true , print 'Underload'
        }
        else
        {
            printf("Normal\n"); // If false , print 'Normal'
        }
    }
    return 0; // Exit the program
}
