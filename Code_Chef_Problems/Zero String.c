#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Lenght of string

    scanf("%d", &T);

    while (T--) // Run each tast case
    {
        scanf("%d", &N);
        getchar();

        int count_1 = 0;
        int count_0 = 0;
        char String[N + 1];
        fgets(String, N + 1, stdin); // Take all input in string

        for (int i = 0; i < N; i++)
        {
            if (String[i] == '0') // If string the of index 'i' value is equal to '0'
            {
                count_0++; // If true ,add by one
            }
            else
            {
                count_1++; // If false, add by one
            }
        }

        if (count_0 == N) // If count_0 is eqaul to N
        {
            printf("0\n"); // If true, print '0'
        }
        else if (count_1 == N) // If count_1 is eqaul to N
        {
            printf("1\n"); // If true, print '1'
        }
        else if (count_1 > count_0) // If count_1 is more than count_0
        {
            printf("%d\n", count_0 + 1); // If true, print count_0 value + 1
        }
        else if (count_0 >= count_1) // If count_0 is more than equal to count_0
        {
            printf("%d\n", count_1); // If true, print count_1 value
        }
    }

    return 0; // Exit the program
}
