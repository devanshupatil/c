#include <stdio.h>

float ConvertTemp(float celsius);

int main()
{
    float celsius;

    printf("Enter number :");
    scanf("%f", &celsius);

    printf("far = %f", ConvertTemp(celsius));

    return 0;
}

float ConvertTemp(float celsius)
{

    float far = celsius * (9 / 5) + 32;

    return far;
}