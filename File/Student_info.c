#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("D:\\C_Programming\\c\\File\\Info.txt", "w");

    char name[25];
    int age;
    float cgp;

    printf("Enter name : ");
    fgets(name, 25, stdin);

    printf("Enter age : ");
    scanf("%d", &age);

    printf("Enter cgp : ");
    scanf("%f", &cgp);

    fprintf(fptr, "Student name : %s", name);
    fprintf(fptr, "Student age : %d\n", age);
    fprintf(fptr, "Student cgpa : %f\n", cgp);

    fclose(fptr);

    return 0;
}