#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000] = {0};
    int T; // Denoting number of test cases
    int N; // List of contest code
    int n;
    int count1 = 0;
    int count2 = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        count1 = 0;
        count2 = 0;

        scanf("%d", &N);

        for (int j = 0; j < N; j++)
        {
            scanf("%s", string);

            if (strcmp(string, "START38"))
            {
                count1 += 1;
            }

            if (strcmp(string, "LTIMER108"))
            {
                count2 += 1;
            }
        }
        printf("%d %d \n", count1, count2);
    }

    return 0;
}
