#include <stdio.h>
#include <string.h>

struct Player
{
    char name[100];
    int levels;
    int count_Items; // Length of items
    int Maximum_inventory_size;
};

struct Players
{
    struct Player player_A;
    struct Player player_B;
};

struct Items
{
    char Name[100];
    int quantity;
};

struct Player_inventory
{
    struct Items items[100];
};

void Initialize_Player(struct Players *ply);

int main()
{
    struct Player_inventory PI;

    struct Player player;

    struct Players players;

    Initialize_Player(&players);

    int menu;
    int count = 0;

    printf("In menu which one you have to do, If don't enter '0'.\n");
    printf("1. Add Item To Inventory\n");
    printf("2. Remove Item From Inventory\n");
    printf("3. Display Inventory\n");
    printf("4. Upgrade Inventory\n");
    printf("5. Trade Items\n");
    printf("\n");

    printf("Enter number in menu : ");
    scanf("%d", &menu);

    while (menu != 0)
    {
        if (menu == 1) // If menu is equal to 1
        {
            printf("\n");
            printf("Enter name : ");
            getchar();
            fgets(PI.items[player.count_Items].Name, 100, stdin); // If true , take input name

            printf("Enter quantity : ");
            scanf("%d", &PI.items[player.count_Items].quantity); // If true , take input quantity
            printf("\n");

            player.count_Items++; // Add count Items by one
        }
        else if (menu == 2) // If menu is equal to 2
        {
            char name_remove[30];
            char name[30];

            printf("Enter name : ");

            getchar();
            fgets(name_remove, 30, stdin); // If true , take input into name remove

            for (int i = 0; i < player.count_Items; i++)
            {
                if (strcmp(name_remove, PI.items[i].Name) == 0) // If name_ramove is equal to name of one index in items
                {
                    strcpy(PI.items[i].Name, name); // If true , remove that name and assign nul
                    PI.items[i].quantity = 0;       // If true , Assign 0

                    player.count_Items--; // If true , subtract by one
                }
            }
        }
        else if (menu == 3) // If menu is equal to 3
        {
            printf("\n");
            for (int i = 0; i <= player.count_Items; i++)
            {
                if (PI.items[i].quantity != 0) // If items os each index quantity is not eqaul to 0
                {
                    printf("%s", PI.items[i].Name);       // If true , print name
                    printf("%d\n", PI.items[i].quantity); // If true , print quantity
                }
            }
            printf("\n");
        }
        else if (menu == 4) // If manu is equal to 4
        {
            int Upgrade;
            char name[30];

            printf("Enter name that quantity you have to Upgrade : ");
            getchar();
            fgets(name, 30, stdin); // Take input into name of that we have to upgrade quantity

            printf("Enter Upgrade : ");
            scanf("%d", &Upgrade); // Take quantity that we have to upgrade

            for (int i = 0; i < player.count_Items; i++)
            {
                if (strcmp(name, PI.items[i].Name) == 0) // If name is equal to, in items of any index
                {
                    PI.items[i].quantity += Upgrade; // If true , Add that upgrade in index quantity
                }
            }
        }
        else if (menu == 5) // If manu is equal to 5
        {
            char name1[100];
            char name2[100];
            char temp_name[100];
            int temp_quantity = 0;

            printf("\n");

            printf("Enter first name that you have to exchange : ");
            getchar();
            fgets(name1, 100, stdin); // Take input into name 1, the name we have to exchang with second name

            printf("Enter second name that you have to exchange : ");
            fgets(name2, 100, stdin); // Take input into name 2, the name we have to exchang with first name
            printf("\n");

            for (int j = 0; j < player.count_Items; j++)
            {
                if (strcmp(PI.items[j].Name, name1) == 0) // If name 1 is equal to, in items name
                {
                    for (int k = 0; k < player.count_Items; k++)
                    {
                        if (strcmp(PI.items[k].Name, name2) == 0) // If true, If name 2 is equal to, in items name
                        {
                            strcpy(temp_name, PI.items[j].Name);        // If true , Assign name 1 into temp_name
                            strcpy(PI.items[j].Name, PI.items[k].Name); // If true, Assing name 2 into name 1
                            strcpy(PI.items[k].Name, temp_name);        // If true, Assign temp_name into name 2

                            temp_quantity = PI.items[j].quantity;        // If true, Assign name 1 quantity into temp_quantity
                            PI.items[j].quantity = PI.items[k].quantity; // If true, Assign name 2 quantity into name 1 quantity
                            PI.items[k].quantity = temp_quantity;        // If true, Assign temp_quantity into name 2
                            break;
                        }
                    }
                }
                break;
            }
        }
        printf("Enter number in menu : ");
        scanf("%d", &menu);
    }
    return 0;
}

void Initialize_Player(struct Players *ply) // Assigning Players Initial value
{
    ply->player_A.levels = 1;                  // Assigning levels 1
    ply->player_A.Maximum_inventory_size = 10; // Assign size 10
    ply->player_A.count_Items = 0;             // Assign count of items 0
    strcpy(ply->player_A.name, "Player_A");    // Assign name 'Player_A'

    ply->player_B.levels = 1;                  // Assigning levels 1
    ply->player_B.Maximum_inventory_size = 10; // Assign size 10
    ply->player_B.count_Items = 0;             // Assign count of items 0
    strcpy(ply->player_B.name, "Player_B");    // Assign name 'Player_B'
}