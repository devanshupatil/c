#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int N; // Years

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &N);

        if (N == 2010 || N == 2015 || N == 2016 || N == 2017 || N == 2019)
        {
            printf("HOSTED\n");
        }
        else
        {
            printf("NOT HOSTED\n");
        }
    }
    return 0;
}
