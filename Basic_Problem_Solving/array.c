#include <stdio.h>
#include <stdlib.h>

struct List_Item
{
    int type;
};
struct List
{
    struct List_Item *ptr;
};

int main()
{
    struct List list;
    // list.ptr = (struct List_Item *)malloc(list.Capacity * sizeof(struct List_Item));

    list.ptr = (struct List *)malloc(5 * sizeof(struct List));

    list.ptr[0].type = 1;
    list.ptr[1].type = 2;
    list.ptr[2].type = 3;
    list.ptr[3].type = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", list.ptr[i].type);
    }
    return 0;
}