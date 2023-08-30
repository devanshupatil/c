#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N;
    int factorial = 0;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) // Run each tast case
    {
        scanf("%d", &N);

        factorial = 1; // Assign 1

        for (int j = 1; j < N; j++) // Run N - 1 tast case
        {
            factorial *= j + 1; // Calculating the factorial number
        }
        printf("%d\n", factorial); // printing factorial number
    }

    return 0; // Exit the program
}
