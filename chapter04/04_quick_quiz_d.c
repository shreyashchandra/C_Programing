#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("No from n to 1 are %d\n", i);
    }

    return 0;
}