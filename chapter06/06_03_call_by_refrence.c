#include<stdio.h>
void swap(int *a, int *b);

int main()
{
    int x = 3, y =4;

    printf("Values of x and y before swap is %d, %d\n", x, y);

    swap(&x, &y);

    printf("Value of x and y after swap is %d, %d\n", x, y);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
