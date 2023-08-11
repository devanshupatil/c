#include <stdio.h>

int main(void)
{
    int T;    // Denoting the numbet of tast case
    int A, B; // The intial number of goals team 1 and team 2
    int C, D; // The final number of goals team 1 and team 2

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast cae
    {
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D);

        if (C >= A && D >= B) // If intial number of goals team 1 and team 2 is less than final number of goals team 1 and team 2
        {
            printf("POSSIBLE\n"); // If true , pritn 'POSSIBLE'
        }
        else
        {
            printf("IMPOSSIBLE\n"); // IF false , 'IMPOSSIBLE'
        }
    }
    return 0; // Exit the program
}
