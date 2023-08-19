#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Number of friends
    int M; // Number of left leg shoes
    int Total_shoes = 0;
    int count = 0;
    int num_buy_shoes = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d", &N, &M);

        Total_shoes = N * 2; // Calculate the total number of shoes

        count = 0; // After one tast case count will 0

        if (N > M) // If the number of friends is more than number of left leg shoes
        {
            while (M != Total_shoes) // If true , If Number of left leg shoes is not equal to total number of shoes
            {
                M++;     // Add each point by one
                count++; // Add each point by one
            }

            printf("%d\n", count); // If true , print 'count'
        }
        else
        {
            num_buy_shoes = ceil(Total_shoes / 2.0); // If false , calculate number of buy shoes

            printf("%d\n", num_buy_shoes); // If false , print 'number of buy shoes'
        }
    }
    return 0; // Exit the program
}
