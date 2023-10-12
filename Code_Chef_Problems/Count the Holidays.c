#include <stdio.h>

int main(void)
{
    int T;                       // Denoting the number of tast case
    int N;                       // Number of festival days
    int holidays_date[30] = {0}; // Holidays date

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        int festival_days[N];
        int holidays = N + 8; //  Additional of festival day and holiday

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &festival_days[j]);

            if (festival_days[j] % 7 == 0 || festival_days[j] % 7 == 6) // If the festival day module 7 is equals to 0 or Festival day modulo 7 is equals to 6
            {
                holidays--; // If true, Subtract by one
            }
        }

        printf("holidays = %d\n", holidays); // Print number of holidays
    }
    return 0; // Exit the program
}
