#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Cost of online order
    int M; // Cost of eating in restaurant
    float gets_discount = 0;
    float with_discount = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &N, &M);

        gets_discount = N / 10.0;          // Calculating the discount into rupees
        with_discount = N - gets_discount; // Subtracting the discount in rupees

        if (with_discount < M) // If online order whith discount cost is less than Cost of eating in restaurant
        {
            printf("ONLINE \n"); // If true , print 'ONLINE'
        }
        else if (with_discount == M) //  If online order whith discount cost is equal to Cost of eating in restaurant
        {
            printf("EITHER \n"); // If true , print 'EITHER'
        }
        else
        {
            printf("DINING \n"); // If false , print 'DINING'
        }
    }
    return 0; // Exit the program
}
