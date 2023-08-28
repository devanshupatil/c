#include <stdio.h>
#include <math.h>

int main(void)
{
    int T; // Denothing the number of tast case
    int N; // Number of items bought by Chef
    int number_polybags = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        number_polybags = ceil(N / 10.0); // Calculating the number of polybags required
        printf("%d\n", number_polybags);  // print 'number of polybags'
    }
    return 0; // Exit the program
}
