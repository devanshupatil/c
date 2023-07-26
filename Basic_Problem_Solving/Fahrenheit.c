#include <stdio.h>

float ConvertTemp(float celsius);

int main()
{
    float far = ConvertTemp(0);

    // printf("Enter number :");
    // scanf("%f", &celsius);

    printf("far = %f", far);

    return 0;
}

float ConvertTamp(float celsius)
{
    float far = celsius * (9 / 5) + 32;

    return far;
}