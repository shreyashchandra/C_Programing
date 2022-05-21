#include <stdio.h>
float avg(float a, float b, float c);

int main()
{
    float a, b, c;

    printf("Enter 3 numbers\n");
    scanf("%f %f %f", &a, &b, &c);

    printf(" Average of %f, %f, %f is %f\n", a, b, c, avg(a, b, c));

    return 0;
}
float avg(float a, float b, float c)
{
    float result;
    result = (int)(a + b + c) / 3;

    return result;
}