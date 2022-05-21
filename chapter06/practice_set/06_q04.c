#include <stdio.h>
void sumAndavg(int a, int b, float *sum, float *avg);

int main()
{
    int i = 3;
    int j = 6;
    float sum, avg;
    sumAndavg(i, j, &sum, &avg);

    printf("The sum and avg of %d, %d are respectively %.2f and %.2f\n", i, j, sum, avg);

    return 0;
}
void sumAndavg(int a, int b, float *sum, float *avg)
{
    *sum = a + b;

    *avg = *sum / 2;
}
