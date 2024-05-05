#include <stdio.h>

struct Info
{
    int id;
    int description;
    int year;
    int Month;
    int date;
    int priority;
};
struct Tasks_based_date_and_priority
{
    struct Info info[3];
};

int Bubble_Sort(struct Tasks_based_date_and_priority *TBDP, int size, struct Tasks_based_date_and_priority temp)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (TBDP->info[i].priority > TBDP->info[j].priority)
            {
                temp.info[i] = TBDP->info[i];
                TBDP->info[i] = TBDP->info[j];
                TBDP->info[j] = temp.info[i];
            }
        }
    }

    printf("\nSorted Array:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("Id: %d, description: %d, date : %d-%d-%d, priority: %d\n", TBDP->info[i].id, TBDP->info[i].description, TBDP->info[i].year, TBDP->info[i].Month, TBDP->info[i].date, TBDP->info[i].priority);
    }
}

int main()
{
    struct Tasks_based_date_and_priority TBDP;

    TBDP.info[0].id = 1;
    TBDP.info[0].description = 1;
    TBDP.info[0].year = 2024;
    TBDP.info[0].Month = 05;
    TBDP.info[0].date = 10;
    TBDP.info[0].priority = 2;

    TBDP.info[1].id = 2;
    TBDP.info[1].description = 2;
    TBDP.info[1].year = 2024;
    TBDP.info[1].Month = 05;
    TBDP.info[1].date = 05;
    TBDP.info[1].priority = 1;

    TBDP.info[2].id = 3;
    TBDP.info[2].description = 3;
    TBDP.info[2].year = 2024;
    TBDP.info[2].Month = 05;
    TBDP.info[2].date = 15;
    TBDP.info[2].priority = 3;
    printf("Unsorted Array:-\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Id: %d, description: %d, date : %d-%d-%d, priority: %d\n", TBDP.info[i].id, TBDP.info[i].description, TBDP.info[i].year, TBDP.info[i].Month, TBDP.info[i].date, TBDP.info[i].priority);
    }

    Bubble_Sort(&TBDP, 3, TBDP);
}