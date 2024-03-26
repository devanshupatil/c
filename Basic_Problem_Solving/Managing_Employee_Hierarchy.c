#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int Employee_ID;
    char Name[20];
    char Postion[10];
    int Manager_ID;
    struct Node *Child_Arr[10];
};

struct Tree
{
    struct Node *Root;
};

struct Node *Global;
int Find_Employee(struct Node *node, char *E_Name)
{
    if (node != NULL) // If the node is not null
    {
        if (strcmp(node->Name, E_Name) == 0) // If true, name of employee is equal to node name employee
        {
            Global = node; // If true, Assign node info to global varible
            return 0;      // Exit the function
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (node->Child_Arr[i] != NULL) // If node of child array of 'i' index is not null
                {
                    if (strcmp(node->Child_Arr[i]->Name, E_Name) == 0) // If name of employee is equal to node of array 'i' index name employee
                    {
                        Global = node->Child_Arr[i]; // If true, assign node of child array of 'i' index info to global varible
                        return 0;                    // Exit the program
                    }
                }
            }

            for (int j = 0; j < 10; j++)
            {
                Find_Employee(node->Child_Arr[j], E_Name); // call Find_Employee function and Passing the node of array of 'j' index one by one and name of employee
            }
        }
    }
}

void Add_Employee(struct Tree *tree, struct Node *Parent)
{
    struct Node *Pointer = (struct Node *)malloc(sizeof(struct Node)); // Alloceting the memomey of node

    printf("\n************************\n");
    printf("Enetr Employee ID: ");
    scanf("%d", &Pointer->Employee_ID);

    getchar();
    printf("Enter Name of Employee: ");
    fgets(Pointer->Name, 20, stdin);
    printf("\n************************\n");

    for (int i = 0; i < 10; i++)
    {
        Pointer->Child_Arr[i] = NULL; // Assigning the pointer of child array of each index null
    }
    if (Parent == NULL) // If parent is equal to null
    {
        tree->Root = Pointer;       // assign pointer into root node
        tree->Root->Manager_ID = 0; // Assign 0 into root node manager
    }

    if (Parent != NULL) // If parent is not equal to null
    {
        char E_Name[30];
        printf("Enter Name of Empolyee to find: ");
        fgets(E_Name, 30, stdin); // Take input name

        Find_Employee(tree->Root, E_Name); // Call find employee function and pass tree , name of employee (to find) and pointer

        Parent = Global;                           // Assign the global varible info to parent varaible
        Pointer->Manager_ID = Parent->Employee_ID; // Assign the parent employee id to pointer manager id

        for (int j = 0; j < 10; j++)
        {
            if (Parent->Child_Arr[j] == NULL) // If parent of chlid array of 'j' index is equal to null
            {
                Parent->Child_Arr[j] = Pointer; // If true, Assign pointer info to parent of child array of 'j' index
                break;                          // Exit the loop
            }
        }
    }

    char Add_More_Employee;
    printf("You what to add more employee: ");
    scanf("%c", &Add_More_Employee); // Ask to add employee

    if (Add_More_Employee == 'Y' || Add_More_Employee == 'y') // If Yes
    {
        Add_Employee(tree, Pointer); // Call Add Employee function and pass tree and pointer
    }
}

int Remove_Employee(struct Node *node, char *E_Name)
{
    if (node != NULL) // Node is not equal to NULL
    {
        if (strcmp(node->Name, E_Name) == 0) // If name of employee is equal to node name employee
        {
            node = NULL; // Assign Node to NULL
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (node->Child_Arr[i] != NULL) // If node of chlid array of 'i' index in not equal to null
                {
                    if (strcmp(node->Child_Arr[i]->Name, E_Name) == 0) // If name of employee is equal to node of array 'i' index name employee
                    {
                        node->Child_Arr[i] = NULL; // Assign NULL to node of chlid array of 'i' index
                        break;                     // Exit the loop
                    }
                }
            }

            for (int j = 0; j < 10; j++)
            {
                Remove_Employee(node->Child_Arr[j], E_Name); // Call Remove_Employeefunction and Passing the node of chlid array one by one and employee name
            }
        }

        char If_Remove;
        printf("If you what to remove employee: ");
        scanf("%c", &If_Remove);

        if (If_Remove == 'Y' || If_Remove == 'y') // If remove is equal to 'Y' or 'y'
        {
            char E_name[30];
            getchar();
            fgets(E_name, 30, stdin); // If true, Taking input name of employee

            Remove_Employee(node, E_name); // Call Remove_Employee function and Passing node and employee name to find
        }
        else
        {
            return 0; // Exit the Function
        }
    }
}

int main()
{
    struct Tree tree;

    int type;

    while (1)
    {
        printf("1. Add Employee   2. Remove Eployee  3. Exit \n");
        printf("Enter Number: ");
        scanf("%d", &type);

        if (type == 1) // If type is equal to 1
        {
            Add_Employee(&tree, NULL); // If true, Call Add_Employee function and pass tree and null
        }
        else if (type == 2) // If type is equal to 2
        {
            char E_NAME[30];
            getchar();

            printf("Enetr Remove employee name: ");
            fgets(E_NAME, 30, stdin); // Take input employee name

            Remove_Employee(tree.Root, E_NAME); // Call Remove_Employee function and pass tree root and employee name
        }
        else if (type == 3) // If type is equal to 3
        {
            return 0; // Exit the program
        }
        else
        {
            printf("INVALID!\n"); // If false, print INVALID!
        }
    }
}

/*
    1.Add Employee
        * Create Employee
            - Creat a node (Pointer) and take input (info)
            - Assign Pointer to root node and assign pointer od chlid array of each index null

        * Find manager Employee name
            - Take Employee name input in varible (E_Name) and take global struct varible
            - Check Employee name (E_Name) is equal to tree of node employee name of tree of node of chlid array employee name
            - Assign node (info) to globle varable

        * Link manager to Employee
            - Assign Globle varible to parent varible in function Add_Employee
            - Assign parent varible employee id to pointer manager id

    2. Remove Employee
        - Find Node by useing employee name
        - Assign NUll to node
*/