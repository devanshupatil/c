#include <stdio.h>
#include <string.h>

struct calculated
{
    char month[100];
    int days[100];
    int year[100];
    int remaining_days;
};

int main()
{
    struct calculated c1;

    scanf("%s", &c1.month);
    scanf("%d", &c1.year);
    scanf("%d", &c1.days);

    if (strcmp(c1.month, "January"))
    {
        c1.remaining_days = 31 - c1.days;
    }
}
