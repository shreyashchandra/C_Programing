#include<stdio.h>

int main()
{
    int i, n, sum;

    i =1;
    n =10;
    sum =0;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d", sum);
    
    return 0;
}