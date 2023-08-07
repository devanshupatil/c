#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Length of string
    int count = 0;
    char str[100];

    scanf("%d", &T); // input , number of tast case

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N); // input , Lingth of string

        scanf("%s", str); // input , string

        count = 0; // The one tast case complete then assign count equal to 0

        for (int j = 0; j < N; j++) // Run each length of tast case
        {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') // If the string is equal to vowels
            {
                count = 0; // If true , count 0
            }

            else
            {
                count++; // If false , count 1

                if (count == 4) // If count is equal to 4
                {
                    break; // If true , break the statement
                }
            }
        }
        if (count == 4) // If count is equal to 4
        {
            printf("NO\n"); // If true , print 'NO'
        }
        else
        {
            printf("YES\n"); // If false , print 'YES'
        }
    }
    return 0; // Exit the program
}
