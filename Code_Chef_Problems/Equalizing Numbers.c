#include <stdio.h>

int main(void)
{
    int T;    // Denoting the numbar if tast case
    int A, B; // Number

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &A, &B);

        if ((A - B) % 2 == 0 || (B - A) % 2 == 0) // If A subtract B and modulo 2 is equal to 0 or If B subtract A and modulo 2 is equal to 0
        {
            printf("YES\n"); // If true , print 'YES'
        }
        else
        {
            printf("NO\n"); // If false , print 'NO'
        }
    }
    return 0; // Exit the program
}
