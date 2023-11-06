#include <stdio.h>
#include <string.h>

struct Table_Item
{
    char Key[100];
    char value[100]; // same
};
struct Hash_Table
{
    struct Table_Item items[10]; // value strore in this index
    int Capacity;
    int count; //
};

int main()
{
    struct Hash_Table hash_table;
    hash_table.Capacity = 10;
    hash_table.count = 0;
    char value[100];
    char key[100];
    int big_integer = 0;
    int small_integer = 0;
    int Option;

    while (1)
    {
        printf("1. Exit, 2. set, 3 get\n"); // get and set and exit
        printf("Enter number of option: ");
        scanf("%d", &Option);

        if (Option == 1)
        {
            break;
        }
        else if (Option == 2)
        {
            getchar();
            printf("Enetr key: ");
            fgets(key, 100, stdin);
            printf("Enetr value: ");
            fgets(value, 100, stdin);

            for (int i = 0; key[i] != '\n'; i++)
            {
                big_integer += key[i];
            }
            small_integer = big_integer % hash_table.Capacity;

            strcpy(hash_table.items[small_integer].Key, key);
            strcpy(hash_table.items[small_integer].value, value);
            hash_table.count++;
        }
        else if (Option == 3)
        {
            // chack if key exist are not
            big_integer = 0; // Assign 0

            for (int i = 0; key[i] != '\n'; i++) //
            {
                big_integer += key[i]; // Convert character key into big integer
            }

            small_integer = big_integer % hash_table.Capacity; // Convert big integers into small integer

            if (strcmp(hash_table.items[small_integer].Key, key) == 0 && strcmp(hash_table.items[small_integer].value, value) == 0) // If item small_integer index value is equal to key value
            {
                printf("Exist\n"); // If true, print Exist
            }
            else
            {
                printf("Not exist\n"); // If false, print Not exist
            }
        }
        else
        {
            printf("Invalid!\n");
        }
    }

    return 0;
}