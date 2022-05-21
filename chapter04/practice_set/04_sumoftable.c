#include <stdio.h>

int main()
{
    int i = 1, n = 2, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i * n;
    }

    printf("sum is %d", sum);

    return 0;
}