#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf("Natural no. till n are %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}