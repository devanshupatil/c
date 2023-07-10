#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char salt[] = "123";

    printf("Enetr pass :");
    scanf("%s", &str);

    strcat(str, salt);

    printf("New pass = %s", str);

    return 0;
}