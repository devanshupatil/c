#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Question
{
    char question[1000];
    char Option_A[100];
    char Option_B[100];
    char Option_C[100];
    char Option_D[100];

    char answer[100];
};

struct Quizs
{
    struct Question Questions[100];
};

int main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\Dell\\Desktop\\Question and Answer.txt", "r");

    char ch;
    int breaks = 0;
    int Question = 0;
    int count = 0;
    char Q = 49;
    int i = 0;
    int j = 0;
    struct Quizs quiz;

    ch = getc(ptr);
    while (ch != EOF) // EOF
    {
        while (quiz.Questions[i].question[0] != 'Q')
        {
            quiz.Questions[i].question[0] = ch;
            ch = getc(ptr);
        }

        if (quiz.Questions[i].question[0] == 'Q')
        {
            quiz.Questions[i].question[1] = Q;
            Q++;
            Question++;
            quiz.Questions[i].question[2] = '.';
            quiz.Questions[i].question[3] = ' ';

            j = 4;
            while (j != 1000)
            {
                if (ch == 125)
                {
                    break;
                }
                else if (ch != 123)
                {
                    quiz.Questions[i].question[j] = ch;
                    j++;
                }
                ch = getc(ptr);
            }
        }

        while (quiz.Questions[i].Option_A[0] != 'O')
        {
            quiz.Questions[i].Option_A[0] = ch;
            ch = getc(ptr);
        }

        if (quiz.Questions[i].Option_A[0] == 'O')
        {
            j = 3;
            quiz.Questions[i].Option_A[0] = 'A';
            quiz.Questions[i].Option_A[1] = '.';
            quiz.Questions[i].Option_A[2] = ' ';

            while (j != 100)
            {

                if (ch != 123)
                {
                    if (ch != ',')
                    {
                        quiz.Questions[i].Option_A[j] = ch;
                        j++;
                    }

                    if (ch == ',')
                    {
                        j = 3;
                        quiz.Questions[i].Option_B[0] = 'B';
                        quiz.Questions[i].Option_B[1] = '.';
                        quiz.Questions[i].Option_B[2] = ' ';
                        ch = getc(ptr);
                        while (j != 100)
                        {
                            if (ch != ',')
                            {
                                quiz.Questions[i].Option_B[j] = ch;
                                ch = getc(ptr);
                                j++;
                            }
                            else
                            {
                                j = 3;
                                quiz.Questions[i].Option_C[0] = 'C';
                                quiz.Questions[i].Option_C[1] = '.';
                                quiz.Questions[i].Option_C[2] = ' ';
                                ch = getc(ptr);

                                while (j != 100)
                                {
                                    if (ch != ',')
                                    {
                                        quiz.Questions[i].Option_C[j] = ch;
                                        ch = getc(ptr);
                                        j++;
                                    }
                                    else
                                    {
                                        j = 3;
                                        quiz.Questions[i].Option_D[0] = 'D';
                                        quiz.Questions[i].Option_D[1] = '.';
                                        quiz.Questions[i].Option_D[2] = ' ';
                                        ch = getc(ptr);

                                        while (j != 100)
                                        {
                                            if (ch != 125)
                                            {
                                                quiz.Questions[i].Option_D[j] = ch;
                                                ch = getc(ptr);
                                                j++;
                                            }
                                            else
                                            {
                                                break;
                                            }
                                        }
                                    }

                                    if (ch == 125)
                                    {
                                        break;
                                    }
                                }
                            }

                            if (ch == 125)
                            {
                                break;
                            }
                        }
                    }
                    if (ch == 125)
                    {
                        break;
                    }
                }
                ch = getc(ptr);
            }

            while (quiz.Questions[i].answer[0] != 'A')
            {

                quiz.Questions[i].answer[0] = ch;
                ch = getc(ptr);
            }

            j = 0;
            while (ch != 125)
            {
                if (ch != 123)
                {
                    if (ch != 125)
                    {
                        quiz.Questions[i].answer[j] = ch;
                        j++;
                    }
                }
                ch = getc(ptr);
            }
            i++;
            ch = getc(ptr);
        }
    }

    for (int i = 0; i < Question; i++)
    {
        char Ans;
        puts(quiz.Questions[i].question);
        puts(quiz.Questions[i].Option_A);
        puts(quiz.Questions[i].Option_B);
        puts(quiz.Questions[i].Option_C);
        puts(quiz.Questions[i].Option_D);

        printf("\n");
        printf("Enter Answer : ");
        scanf("%c", &Ans);
        getchar();

        Ans = toupper(Ans);

        if (Ans == quiz.Questions[i].answer[0])
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

    printf("Your total score is %d / %d\n", count, Question);
    fclose(ptr);
}