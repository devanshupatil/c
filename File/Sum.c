#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("D:\\C_Programming\\c\\File\\Tast.txt", "r");

    int a;
    int b;

    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fptr = fopen("D:\\C_Programming\\c\\File\\Tast.txt", "w");

    fprintf(fptr, "%d", a + b);

    fclose(fptr);

    return 0;
}