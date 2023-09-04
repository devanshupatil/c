#include <stdio.h>
#include <string.h>

struct Question
{
    char question[100];
    char A[100];
    char B[100];
    char C[100];
    char D[100];
    char answer[100];
    char ans;
};

struct Quizs
{
    struct Question Questions[100];
};

int main()
{
    struct Quizs quiz;

    int count = 0;

    strcpy(quiz.Questions[0].question, "Q1. Which one of the following method of revenue assessment is related to the Vijayanagara Empire?");

    strcpy(quiz.Questions[0].A, "A. Chauth");
    strcpy(quiz.Questions[0].B, "B. Ryotwari");
    strcpy(quiz.Questions[0].C, "C. Rae Rekho");
    strcpy(quiz.Questions[0].D, "D. Sardeshmukhi");
    strcpy(quiz.Questions[0].answer, "D. Sardeshmukhi");

    strcpy(quiz.Questions[1].question, "Q2. Chhatrapati Shivaji Maharaj crowned himself at");

    strcpy(quiz.Questions[1].A, "A. Puna");
    strcpy(quiz.Questions[1].B, "B. Konkan");
    strcpy(quiz.Questions[1].C, "C. Bijapur");
    strcpy(quiz.Questions[1].D, "D. Raigarh");
    strcpy(quiz.Questions[1].answer, "D. Raigarh");

    strcpy(quiz.Questions[2].question, "Q3. Chhatrapati Shivaji Maharaj maintained a fleet at");

    strcpy(quiz.Questions[2].A, "A. Surat");
    strcpy(quiz.Questions[2].B, "B. Calicut");
    strcpy(quiz.Questions[2].C, "C. Bombay");
    strcpy(quiz.Questions[2].D, "D. Kolaba");
    strcpy(quiz.Questions[2].answer, "D. Kolaba");

    strcpy(quiz.Questions[3].question, "Q4. Chhatrapati Shivaji Maharaj submitted to Jai Singh and signed the treaty of\n");

    strcpy(quiz.Questions[3].A, "A. Puna");
    strcpy(quiz.Questions[3].B, "B. Purandhar");
    strcpy(quiz.Questions[3].C, "C. Konkan");
    strcpy(quiz.Questions[3].D, "D. Surat");
    strcpy(quiz.Questions[3].answer, "B. Purandhar");

    strcpy(quiz.Questions[4].question, "Q5. Under Chhatrapati Shivaji Maharaj rule, the head of a unit of 25 in the Cavalry was known as");

    strcpy(quiz.Questions[4].A, "A. Jumadar");
    strcpy(quiz.Questions[4].B, "B. Havaldar");
    strcpy(quiz.Questions[4].C, "C. Faujdar");
    strcpy(quiz.Questions[4].D, "D. Hazari");
    strcpy(quiz.Questions[4].answer, "B. Havaldar");

    for (int i = 0; i < 5; i++)
    {
        puts(quiz.Questions[i].question);
        puts(quiz.Questions[i].A);
        puts(quiz.Questions[i].B);
        puts(quiz.Questions[i].C);
        puts(quiz.Questions[i].D);

        printf("\n");
        printf("Enter Answer : ");
        scanf("%c", &quiz.Questions[i].ans);
        getchar();

        if (quiz.Questions[i].ans == quiz.Questions[i].answer[0])
        {
            printf("Your answer is correct\n");
            count++;
        }
        else
        {
            printf("Your answer is not correct. Correct answer was %s.\n", quiz.Questions[i].answer);
        }

        printf("\n");
    }

    printf("Your total score is  5 / %d\n", count);
    return 0;
}