#include <stdio.h>

int main()
{
    int value;
    int size;
    int key;

    printf("Enetr Size of table : ");
    scanf("%d", &size);
    int Table[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enetr value : ");
        scanf("%d", &value);

        key = value % size;
        Table[key] = value;
    }

    for (int j = 0; j < size; j++)
    {
        printf("Hash Table[%d] = %d\n", j, Table[j]);
    }
    return 0;
}