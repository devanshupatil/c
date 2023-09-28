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

    char Ans;
    int breaks = 0;
    int count = 0;
    int question = 0;
    struct Quizs quiz;

    for (int i = 0; i < 2; i++)
    {
        while (quiz.Questions[i].question[0] != 'Q')
        {
            fscanf(ptr, "%c", &quiz.Questions[i].question[0]);
        }

        if (quiz.Questions[i].question[0] == 'Q')
        {
            question++;
            quiz.Questions[i].question[1] = '.';

            for (int j = 2; j < 1000; j++)
            {
                fscanf(ptr, "%c", &quiz.Questions[i].question[j]);

                if (quiz.Questions[i].question[j] == 123)
                {
                    quiz.Questions[i].question[j] = question;
                    quiz.Questions[i].question[j + 1] = ' ';
                    j++;
                }
                else if (quiz.Questions[i].question[j] == '.')
                {
                    break;
                }
            }
        }

        while (quiz.Questions[i].Option_A[0] != 'O')
        {
            fscanf(ptr, "%c", &quiz.Questions[i].Option_A[0]);
        }

        if (quiz.Questions[i].Option_A[0] == 'O')
        {
            for (int j = 0; j < 100; j++)
            {
                fscanf(ptr, "%c", &quiz.Questions[i].Option_A[j]);

                if (quiz.Questions[i].Option_A[j] == 123)
                {
                    quiz.Questions[i].Option_A[j] = 'A';
                    quiz.Questions[i].Option_A[j + 1] = '.';
                    quiz.Questions[i].Option_A[j + 2] = ' ';
                    j += 2;
                }
                else if (quiz.Questions[i].Option_A[j] == ',')
                {
                    quiz.Questions[i].Option_A[j] = '.';

                    if (quiz.Questions[i].Option_A[j] == '.')
                    {
                        quiz.Questions[i].Option_B[0] = 'B';
                        quiz.Questions[i].Option_B[1] = '.';
                        quiz.Questions[i].Option_B[2] = ' ';
                    }

                    for (int k = 3; k < 100; k++)
                    {
                        fscanf(ptr, "%c", &quiz.Questions[i].Option_B[k]);

                        if (quiz.Questions[i].Option_B[k] == ',')
                        {
                            quiz.Questions[i].Option_B[k] = '.';

                            if (quiz.Questions[i].Option_B[k] == '.')
                            {
                                quiz.Questions[i].Option_C[0] = 'C';
                                quiz.Questions[i].Option_C[1] = '.';
                                quiz.Questions[i].Option_C[2] = ' ';
                            }

                            for (int l = 3; l < 100; l++)
                            {
                                fscanf(ptr, "%c", &quiz.Questions[i].Option_C[l]);

                                if (quiz.Questions[i].Option_C[l] == ',')
                                {
                                    quiz.Questions[i].Option_C[l] = '.';

                                    if (quiz.Questions[i].Option_C[l] == '.')
                                    {
                                        quiz.Questions[i].Option_D[0] = 'D';
                                        quiz.Questions[i].Option_D[1] = '.';
                                        quiz.Questions[i].Option_D[2] = ' ';
                                    }
                                    for (int l = 3; l < 100; l++)
                                    {
                                        fscanf(ptr, "%c", &quiz.Questions[i].Option_D[l]);

                                        if (quiz.Questions[i].Option_D[l] == 125)
                                        {
                                            breaks = l;
                                            quiz.Questions[i].Option_D[l] = '.';
                                            break;
                                        }
                                    }
                                }
                                if (quiz.Questions[i].Option_D[breaks] == '.')
                                {
                                    break;
                                }
                            }
                        }
                        if (quiz.Questions[i].Option_D[breaks] == '.')
                        {
                            break;
                        }
                    }
                }
                if (quiz.Questions[i].Option_D[breaks] == '.')
                {
                    break;
                }
            }
        }

        while (quiz.Questions[i].answer[0] != 'A')
        {
            fscanf(ptr, "%c", &quiz.Questions[i].answer[0]);
        }

        if (quiz.Questions[i].answer[0] == 'A')
        {
            for (int z = 0; z < 100; z++)
            {
                fscanf(ptr, "%c", &quiz.Questions[i].answer[z]);

                if (quiz.Questions[i].answer[z] == 123)
                {
                    quiz.Questions[i].answer[z] = ' ';
                }
                else if (quiz.Questions[i].answer[z] == 125)
                {
                    quiz.Questions[i].answer[z] = '.';
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
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

        if (Ans == quiz.Questions[i].answer[1])
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

    printf("Your total score is  2 / %d\n", count);
    fclose(ptr);

    return 0;
}
