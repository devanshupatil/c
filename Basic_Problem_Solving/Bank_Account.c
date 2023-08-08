#include <stdio.h>

typedef struct Bank_Account
{
    char name[100];
    int Account_number;
} Acc;

int main()
{
    Acc BN1 = {"devanshu", 123465867};

    printf("Bank account info :\n");
    printf("%s\n", BN1.name);
    printf("%d", BN1.Account_number);

    return 0;
}