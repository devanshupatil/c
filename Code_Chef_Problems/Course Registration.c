#include <stdio.h>

int main(void)
{
    int T; // The number of test cases
    int N; // The group of friends
    int M; // The maximum capacity of course
    int K; // The number of student already in course

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // The run each tast case
    {
        scanf("%d %d %d", &N, &M, &K);

        if (N + K <= M) // The sum of group of friends and the number of student already in course is less than or equal to the maximum capacity of course
        {
            printf("YES \n"); // If true , print 'YES'
        }
        else
        {
            printf("NO \n"); // if false , print 'NO'
        }
    }

    return 0; // Exit the program
}
