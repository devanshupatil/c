#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Question
{
    char question[100];
    struct Option
    {
        char A[100];
        char B[100];
        char C[100];
        char D[100];
    };

    char answer[100];
};

struct Quizs
{
    struct Question Questions[100];
    struct Option Option[100];
};

int main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\Dell\\Desktop\\New Text Document.txt", "r");

    char Ans;
    struct Quizs quiz;

    for (int i = 0; i < 100; i++)
    {
        fscanf(ptr, "%c", quiz.Questions->question[i]);
    }

    fclose(ptr);
}
