#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of colous
    int greater_value = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);
        int bolls_colous[N];

        for (int j = 0; j < N; j++) // Run each number of colous
        {
            scanf("%d", &bolls_colous[j]);
        }

        greater_value = bolls_colous[0]; // Assign first index number of colours

        for (int k = 0; k < N; k++)
        {
            if (greater_value <= bolls_colous[k]) // If number of colours is greater than ecah index value
            {
                greater_value = bolls_colous[k]; // If true , Assign than index value into greater_value
            }
        }

        printf("%d\n", greater_value); // print greater value into all number of colours
    }
    return 0; // Exit the program
}
