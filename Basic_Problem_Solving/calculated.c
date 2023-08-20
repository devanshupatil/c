#include <stdio.h>

/*
    Create a structure named Date having day, month and year as its elements.
    Store the current date in the structure. Now add 45 days to the current
    date and display the final date.
*/
struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date c1;

    int add_day;
    int arr[100] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Assign the valid day in month

    printf("Enter day : ");
    scanf("%d", &c1.day);

    printf("Enter Month : ");
    scanf("%d", &c1.month);

    printf("Enter year : ");
    scanf("%d", &c1.year);

    printf("Enter how may day you have to add : ");
    scanf("%d", &add_day);

    printf("The current date = %d-%d-%d\n", c1.day, c1.month, c1.year);

    if (c1.day <= arr[c1.month - 1]) // If day is less than or equal to valid day in month
    {
        while (add_day != 0) // If true , add of day is not equal to 0
        {
            if (c1.month == 12) // If month is equal to 12
            {
                if (c1.day == arr[c1.month - 1]) // If true , if day is equal to valid day in month
                {
                    c1.year++;    // If true , add by one
                    c1.month = 1; // If true , assign 1
                    c1.day = 0;   // If true , assign 0
                }
            }
            else if (c1.day == arr[c1.month - 1]) // If day is equal to valid day in month
            {
                c1.month++; // If true , add by one
                c1.day = 0; // If true , assign 0
            }
            else
            {
                c1.day++;  // If false , add by one
                add_day--; // If false , sudtract by one
            }
        }

        printf("The added date = %d-%d-%d\n", c1.day, c1.month, c1.year); // If true , print 'Date'
    }
    else
    {
        printf("Not valid day in a month.\n"); // If false , print 'Not valid day in a month.'
    }

    return 0; // Exit the program
}