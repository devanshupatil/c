#include <stdio.h>
#include <math.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int X; // number of correct marks
    int Total_marks = 0;
    float Question = 0;
    int count = 0;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &X);

        Total_marks = 0;
        Question = 0;
        count = 0;

        Question = ceil(X / 3.0);   // Calculating the number of question
        Total_marks = Question * 3; // Calculating the number of marks

        if (Total_marks == X) // If the Total marks is equal to X
        {
            printf("0\n"); // If true , print '0'
        }
        else
        {
            while (Total_marks != X) // If false , total marks is not equal to X
            {
                Total_marks = Total_marks - 1; // subtract one into total marks
                count++;                       // Count by one
            }
            printf("%d\n", count); // print count
        }
    }
    return 0; // Exit the program
}
