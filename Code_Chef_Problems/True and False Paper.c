#include <stdio.h>

// Bob wrote the same exam but he marked each and every question as the opposite of what Alice did

int main(void)
{
    int T; // The number of test cases
    int N; // The total number of questions in the exam and each questoin is 1 marks

    int K; // The score of Alice

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // loop run each tast case
    {
        scanf("%d %d", &N, &K);

        printf("%d \n", N - K); // The score of bob
    }
    return 0;
}