#include <stdio.h>

int main()
{
    int n, prime = 0;
    printf("Enter n\n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("n is not a PRIME no.\n");
    }
    else
    {
        printf("n is a PRIME no");
    }

    return 0;
}
 