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
FILE *ptr;
char Questions(char chr)
{

    struct Quizs quiz;
    int j = 0;
    int question_number = 0;

    chr = getc(ptr);
    if (chr == 'Q')
    {
        while (j != 100)
        {
            chr = getc(ptr);
            if (chr == 125)
            {
                question_number++;
                j = 0;
                break;
            }
            else if (chr != 123)
            {
                quiz.Questions[question_number].question[j] = chr;
                j++;
            }
        }
    }
}
