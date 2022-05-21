#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        printf("The values of a are %d\n", a);
    }

    return 0;
}