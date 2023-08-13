#include <stdio.h>

int main(void)
{
    int T;          // Denoting the number of tast case
    int P, Q, R, S; // Profit of each companies

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d %d", &P, &Q, &R, &S);

        if (P > (Q + R + S) || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) // If the one company profit is more than all companies
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
