#include <stdio.h>

typedef struct Information_System
{
    char name[100];
    char address[100];
    char gender[100];
    char branch_name[100];
    char subject[100];
    char college_name1[100];
    char work[100];
    int roll_no[100];
    int employee_ID[100];
    int data_brith[100];
    int contact[100];
    int age[100];
    int n;

} IS;

int main()
{
    IS Student;

    printf("Enter number of student info you have to save : ");
    scanf("%d", &Student.n);
    getchar();
    for (int i = 0; i < Student.n; i++)
    {
        printf("Student name : ");
        fgets(Student.name, 100, stdin); // Name of students

        printf("Branch of student : ");
        scanf("%s", &Student.branch_name[i]); // Baranch name of students

        printf("College name of student : ");
        scanf("%s", &Student.college_name1[i]); // college name of students

        printf("Roll number of student : ");
        scanf("%d", &Student.roll_no[i]); // Roll number of students

        printf("Birth data of student : ");
        scanf("%d %d %d", &Student.data_brith[i], &Student.data_brith[i + 1], &Student.data_brith[i + 2]); // Date of birth of students
        getchar();

        printf("Address of student : ");
        fgets(Student.address, 100, stdin); // Address of student

        printf("Contact number of student : ");
        scanf("%d", &Student.contact[i]); // Contact number of students

        printf("Gander of student : ");
        scanf("%s", &Student.gender[i]); // Gender of students
    }
    IS Teacher;

    printf("Enter number of teacher info you have to save : ");
    scanf("%d", &Teacher.n);
    getchar();

    for (int j = 0; j < Teacher.n; j++)
    {
        printf("Teacher name : ");
        fgets(Teacher.name, 100, stdin); // Name of teachers

        printf("Subject of teacher : ");
        scanf("%s", &Teacher.subject[j]); // Sudject of teachers

        printf("Employee id of teacher : ");
        scanf("%d", &Student.employee_ID[j]); // Employee_ID of teachers

        printf("Birth data of teacher : ");
        scanf("%d %d %d", &Teacher.data_brith[j], &Teacher.data_brith[j + 1], &Teacher.data_brith[j + 2]); // Date of birth of teachers
        getchar();

        printf("Address of teacher : ");
        fgets(Teacher.address, 100, stdin); // Address of teachers

        printf("Contact numder of teacher : ");
        scanf("%d", &Teacher.contact[j]); // Contact number of teachers

        printf("Gender of teacher : ");
        scanf("%s", &Teacher.gender[j]); // Gender of teachers

        printf("Age of teacher : ");
        scanf("%d", &Teacher.age[j]);
    }
    IS Staff;

    printf("Enter number of staff info you have to save : ");
    scanf("%d", &Staff.n);
    getchar();

    for (int k = 0; k < Staff.n; k++)
    {
        printf("Staff name : ");
        fgets(Staff.name, 100, stdin); // Name of staff

        printf("Work of staff : ");
        scanf("%s", &Staff.work[k]); // Sudject of staff

        printf("Birth data of staff : ");
        scanf("%d %d %d", &Staff.data_brith[k], Staff.data_brith[k + 1], Staff.data_brith[k + 2]); // Date of birth of staff
        getchar();

        printf("Address of staff : ");
        fgets(Staff.address, 100, stdin); // Address of staff

        printf("Contact number of staff : ");
        scanf("%d", &Staff.contact[k]); // Contact number of staff

        printf("Gender of staff : ");
        scanf("%s", &Staff.gender[k]); // Gender of staff

        printf("Age of staff : ");
        scanf("%d", &Staff.age[k]); // Age of staff
    }

    return 0;
}
