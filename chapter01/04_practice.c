#include <stdio.h>;

int main()
{

    int principal, rate, years;
    printf("What are the Values of principal, rate and years\n");
    scanf("%d", &principal);
    scanf("%d", &rate);
    scanf("%d", &years);

    int SimpleIntrest = (principal * rate * years) / 100;

    printf("The value of simple intrest is %d", SimpleIntrest);

    return 0;
}