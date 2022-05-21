#include<stdio.h>

int main()
{
    int i, n, sum;

    i =1;
    n =10;
    sum =10;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
    
    return 0;
}