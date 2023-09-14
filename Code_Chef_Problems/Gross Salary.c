#include <stdio.h>

int main(void)
{
    int T; // Denoting the number of tast case
    int salary;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) // Run each tast case
    {
        scanf("%d", &salary);

        float Gross_Salary = 0;

        if (salary < 1500) // If salary is less than 1500
        {
            Gross_Salary = salary + salary * 0.10 + salary * 0.90; // If true , calculating Gross Salary

            printf("%.2f\n", Gross_Salary);
        }
        else // If salary more than 1500
        {
            Gross_Salary = salary + 500 + salary * 0.98;
            ; // If false , calculating Gross Salary

            printf("%.2f\n", Gross_Salary);
        }
    }
    return 0; // Exit the program
}
