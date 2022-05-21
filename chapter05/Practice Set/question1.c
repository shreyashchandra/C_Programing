#include<stdio.h>
int printn(int n);

int main()
{
    int i;
    printf("Enter i\n");
    scanf("%d", &i);

    printn(i);

    return 0;
}

int printn(int n)
{
    int i;
    if (i>0 ||i<=n)
    {
        printf("%d", i);
        i++;
    }
    return i;
    
}
