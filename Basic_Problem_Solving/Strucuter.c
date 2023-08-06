#include <stdio.h>
#include <string.h>

struct Address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void printaddress(struct Address adds);

int main()
{
    struct Address adds[5];

    printf("Note :- First enter house number , block , city and then state. \n");
    printf("Enter info of person 1 \n");
    scanf("%d", &adds[0].houseno);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info of person 2 \n");
    scanf("%d", &adds[1].houseno);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("Enter info of person 3 \n");
    scanf("%d", &adds[2].houseno);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printf("Enter info of person 4 \n");
    scanf("%d", &adds[3].houseno);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);

    printf("Enter info of person 5 \n");
    scanf("%d", &adds[4].houseno);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].city);
    scanf("%s", &adds[4].state);

    printaddress(adds[0]);
    printaddress(adds[1]);
    printaddress(adds[2]);
    printaddress(adds[3]);
    printaddress(adds[4]);

    return 0;
}

void printaddress(struct Address adds)
{
    printf("Address is : %d , %d , %s , %s \n", adds.houseno, adds.block, adds.city, adds.state);
}