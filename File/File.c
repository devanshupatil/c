#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("C:\\Users\\Dell\\Desktop\\New Text Document.txt", "r");

    char ch[100];

    fgets(ch, 100, fptr);

    puts(ch);

    fclose(fptr);

    return 0;
}