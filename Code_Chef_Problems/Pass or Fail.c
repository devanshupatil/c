#include <stdio.h>

int main(void)
{
    int T; // Denoting thr number of tast case
    int N; // Total nuumber of question
    int X; // Number of correct question
    int P; // Number of marks to pass
    int Total_correct_marks;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d %d %d", &N, &X, &P);

        Total_correct_marks = 0;

        Total_correct_marks = (X * 3) - (N - X); // Calculating the total number if correct marks

        if (Total_correct_marks >= P) // If Total number of correct marks is more than equal to number of marks to pass
        {
            printf("PASS\n"); // If true , print 'PASS'
        }
        else
        {
            printf("FAIL\n"); // If false , print 'FAIL'
        }
    }
    return 0; // Exit the program
}
