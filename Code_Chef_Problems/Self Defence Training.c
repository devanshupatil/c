#include <stdio.h>

int main(void)
{
    int T;         // Denoting the number of tast case
    int N;         // Number of women
    int age_women; // Age of women
    int eligible_count;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);
        eligible_count = 0;

        for (int j = 0; j < N; j++) // Run each count of women
        {
            scanf("%d", &age_women);

            if (age_women >= 10 && age_women <= 60) // if age of women is more than 10 and less than 60
            {
                eligible_count++; // If true , eligible of count increase
            }
        }

        printf("%d\n", eligible_count); // print 'eligible of count'
    }
    return 0; // Exit the program
}
