#include <stdio.h>
#include <math.h>

float Square(float Number);
float rectangle(float length, float width);
float circle(float radius);

int main()
{
    float Number;
    float length, width;
    float radius;

    printf("Enter side of square :");
    scanf("%f", &Number);

    printf("The area of square = %f \n", Square(Number));

    printf("Enter length of rectange :");
    scanf("%f", &length);

    printf("Enter width of rectange :");
    scanf("%f", &width);

    printf("The area of a rectangle = %f \n", rectangle(length, width));

    printf("Enter redius of circle :");
    scanf("%f", &radius);

    printf("The area of circle = %f \n", circle(radius));
}

float Square(float Number)
{
    return Number * Number;
}

float rectangle(float length, float width)
{
    return length * width;
}

float circle(float radius)
{
    return 3.1414592653 * radius * radius;
}
