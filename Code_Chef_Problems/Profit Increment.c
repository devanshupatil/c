#include <stdio.h>
/*
    1. x is selling prise (100) and y is profit (10)
    2. in selling prise increase 10% we get new selling prise (110)
    3. selling prise  - profit we get buying prise (90)
    4. new selling prise - buying prise we get new profit (20)

*/
int main(void)
{
    int T;
    int X;
    int Y;
    int buy;
    int newselling;
    int newprofit;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &Y);

        buy = X - Y;
        newselling = X * 1.1;
        newprofit = newselling - buy;

        printf("%d \n", newprofit);
    }
    return 0;
}
