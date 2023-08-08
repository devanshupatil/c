#include <stdio.h>

struct Complex_Number
{
    int Imaginary;
    int Real_number;
};

int main()
{
    struct Complex_Number CN1 = {4, 6};
    struct Complex_Number *ptr = &CN1;

    printf("The real part is %d\n", ptr->Real_number);
    printf("The imaginary part is %d\n", ptr->Imaginary);

    return 0;
}
