#include <stdio.h>

struct Items
{
    int id;
    int description;
    int inventory_number;
    int location;
};
struct Warehouse
{
    struct Items items[3];
};

int Insertion_Sort(struct Warehouse house, int size, struct Warehouse current)
{
    for (int i = 1; i < size; i++)
    {
        current.items[i] = house.items[i];
        int j = i - 1;

        while (house.items[j].location > current.items[i].location && j >= 0)
        {
            house.items[j + 1] = house.items[j];
            j--;
        }

        house.items[j + 1] = current.items[i];
    }
    printf("\nSorted Array:-\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Id: %d, description: %d, inventory_number : %d, location: %d\n", house.items[i].id, house.items[i].description, house.items[i].inventory_number, house.items[i].location);
    }
}
int main()
{
    struct Warehouse house;

    house.items[0].id = 1;
    house.items[0].description = 1;
    house.items[0].inventory_number = 123;
    house.items[0].location = 1;

    house.items[1].id = 2;
    house.items[1].description = 2;
    house.items[1].inventory_number = 456;
    house.items[1].location = 2;

    house.items[2].id = 3;
    house.items[2].description = 3;
    house.items[2].inventory_number = 789;
    house.items[2].location = 1;

    printf("Unsorted Array:-\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Id: %d, description: %d, inventory_number : %d, location: %d\n", house.items[i].id, house.items[i].description, house.items[i].inventory_number, house.items[i].location);
    }

    Insertion_Sort(house, 3, house);

    return 0;
}
