// C program to check weather the no. is even or odd.

#include <stdio.h>

int main()
{
    int a;
    printf("Give a no\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The given no is even %d\n", a);
    }
    else
    {
        printf("The given no is odd %d\n", a);
    }

    return 0;
}