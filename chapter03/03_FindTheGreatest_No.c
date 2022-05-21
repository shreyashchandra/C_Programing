#include <stdio.h>

int main()
{
    int a, b, c, g;

    printf("Enter the four no.\n");
    scanf("%d %d %d %d", &a, &b, &c, &g);

    if (a > b && a > c && a >> g)
    {
        printf("the greatest among all no is %d", a);
    }

    else if (b > a && b > c && b >> g)
    {
        printf("the greatest among all no is %d", b);
    }

    else if (c > a && c > b && c >> g)
    {
        printf("the greatest among all no is %d", c);
    }

    else
    {
        printf("the greatest among all no is %d", g);
    }

    return 0;
}