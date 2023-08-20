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

    printf("%d-%d-%d\n", c1.day, c1.month, c1.year);

    if (c1.day <= arr[c1.month - 1]) // If day is less than vaild day in month
    {
        while (add_day != 0) // If true , add of day is not equal to 0
        {
            if (c1.day == arr[c1.month - 1]) // If true , day is equal to valid day in month
            {

                if (c1.month == 12) // If true , month is equal to 12
                {
                    if (c1.day == arr[c1.month - 1]) // If true , day is equal to vaild day on month
                    {
                        c1.year++;                        // If true , Add year by one
                        c1.month = 1;                     // If true , assign 1
                        c1.day = 1;                       // If true , assign 1
                        for (int j = 1; j < add_day; j++) // If true , Run each day we have to add
                        {
                            c1.day++; // If true , Add day by one

                            if (c1.day == arr[c1.month - 1])
                            {
                                c1.month++;
                                c1.day = 1;
                            }
                        }
                        printf("%d-%d-%d\n", c1.day, c1.month, c1.year); // If true , print 'day-month-year'
                        return 0;                                        // If true , Exit the program
                    }
                    else
                    {
                        for (int j = 1; j < add_day; j++) // If false , Run each day we have to add
                        {
                            c1.day++; // Add day by one
                        }
                        printf("%d-%d-%d\n", c1.day, c1.month, c1.year); // If false , print 'day-month-year'
                        return 0;                                        // Exit the program
                    }
                }
                else
                {
                    c1.month++;                       // If false , Add month by one
                    c1.day = 1;                       // If false , Assign 1
                    for (int j = 1; j < add_day; j++) // If false , Run each day we have to add
                    {
                        c1.day++; // If false , Add day by one
                    }
                    printf("%d-%d-%d\n", c1.day, c1.month, c1.year); // If false ,print 'day-month-year'
                    return 0;                                        // If false ,Exit the program
                }
            }
            else
            {
                c1.day++;  // If false , Add day by one
                add_day--; // If false ,Subtract add of day by one
            }
        }
        printf("%d-%d-%d\n", c1.day, c1.month, c1.year); // If false ,print 'day-month-year'
        return 0;                                        // If false ,Exit the program
    }
    else
    {
        printf("Not valid day in a month\n"); // If false , print 'Not valid day in a month'
    }
    return 0; // Exit the program
}
