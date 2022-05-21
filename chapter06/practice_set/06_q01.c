#include<stdio.h>

int main()
{
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The address of variable is %u\n", &a);
    printf("The value of variable is %d\n", *ptr);


    return 0;
}