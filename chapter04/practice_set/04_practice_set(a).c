#include <stdio.h>

int main()
{
    int n, i=10;
    printf("Enter the n\n");
    scanf("%d", &n);
    printf("\n");

    do
    {
        printf("%d X %d = %d\n", n, i, i * n);
        
        i--;
    } while (i >= 1);

    return 0;
}