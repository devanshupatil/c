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
            if (c1.year % 4 == 0) // If leep year
            {
                arr[1] = 29; // If true , in february valid day is 29
            }

            if (c1.day == arr[c1.month - 1]) // If day is equal to valid day in month
            {
                if (c1.month == 12) // If true , month id equal to 12
                {
                    if (c1.year % 4 == 0) // If true , if leep year is over
                    {
                        arr[1] = 28;  // if true , in february valid day is 28
                        c1.year++;    // if true , in Add year by 1
                        c1.day = 1;   // if true , Assign 1
                        c1.month = 1; // if true , Assign 1
                    }
                    else
                    {
                        c1.year++;    // if false , Add year by 1
                        c1.day = 1;   // if false , Assign 1
                        c1.month = 1; // if false , Assign 1
                    }
                }
                else
                {
                    c1.month++; // if false , add by 1
                    c1.day = 1; // if false , Assign 1
                }
            }
            else
            {
                c1.day++; // If false , add by 1
            }

            add_day--; // Subtract by 1
        }

        printf("The added date = %d-%d-%d\n", c1.day, c1.month, c1.year); // If true , print 'Date'
    }
    else
    {
        printf("Not valid day in a month.\n"); // If false , print 'Not valid day in a month.'
    }

    return 0; // Exit the program
}