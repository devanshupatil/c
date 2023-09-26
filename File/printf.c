#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("D:\\C_Programming\\c\\File\\sum.txt", "w+");

    fclose(ptr);
}