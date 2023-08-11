#include <stdio.h>

// Accept & display employee details

typedef struct Employee_details
{
    char name[100];
    char address[100];
    char city[100];
    char State[100];
    char email[100];
    int Birth_date[100];
    int pincode[100];
    int phone_number[100];
    int Number_employee;

} ED;

int main()
{
    ED d1;

    printf("Number of employee : ");
    scanf("%d", &d1.Number_employee);
    getchar();

    for (int i = 0; i < d1.Number_employee; i++)
    {
        printf("Full name : ");
        fgets(d1.name, 100, stdin);

        printf("Birth date : ");
        scanf("%d %d %d", &d1.Birth_date[i], &d1.Birth_date[i + 1], &d1.Birth_date[i + 2]);
        getchar();

        printf("Address : ");
        fgets(d1.address, 100, stdin);

        printf("City : ");
        scanf("%s", &d1.city);

        printf("State : ");
        scanf("%s", &d1.State);

        printf("Pincode : ");
        scanf("%d", &d1.pincode[i]);

        printf("Phone number : ");
        scanf("%d", &d1.phone_number[i]);

        printf("E-mail : ");
        scanf("%s", &d1.email);

        printf("Employee details.\n");
        printf("Name : %s\n", d1.name);
        printf("Birth date : %d %d %d\n", d1.Birth_date[i], d1.Birth_date[i + 1], d1.Birth_date[i + 2]);
        printf("Address : %s\n", d1.address);
        printf("City : %s\n", d1.city);
        printf("State : %s\n", d1.State);
        printf("Pincode : %d\n", d1.pincode[i]);
        printf("Phone number : %d\n", d1.phone_number[i]);
        printf("E-mail : %s\n", d1.email);
    }
    return 0;
}
