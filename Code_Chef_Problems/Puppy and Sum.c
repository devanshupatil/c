#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int D; // The operation time
    int N; // Number

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &D, &N);
        int temp = 0;

        for (int j = 1; j <= D; j++) // Number of operation
        {
            for (int k = 1; k <= N; k++) //
            {
                temp += k; // Sum of 1 to N numbers
            }
            N = temp; // Assign temp into N
            temp = 0; // Assign temp 0
        }

        printf("%d\n", N); // Print N value
    }

    return 0; // Exit the program
}
