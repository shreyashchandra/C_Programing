#include <stdio.h>;

int main()
{
    float c, f;

    printf("What is the temprature in C\n");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temprature in F is %f\n", f);

    return 0;
}