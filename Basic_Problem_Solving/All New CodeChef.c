#include <stdio.h>

int main(void)
{
    int New;
    int Old;

    scanf("%d", &New);
    scanf("%d", &Old);

    if (New > Old)
    {
        printf("New\n");
    }
    else if (Old > New)
    {
        printf("Old\n");
    }
    else
    {
        printf("Same\n");
    }
    return 0;
}
