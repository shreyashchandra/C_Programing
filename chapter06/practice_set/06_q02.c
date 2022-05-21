#include <stdio.h>
void printAdd(int a);

int main()
{
    int i = 4;
    printf("The address of variable is %u\n", &i);

    printAdd(i);

    return 0;
}
void printAdd(int a)
{
    printf("The address of variable is %u\n", &a);
}