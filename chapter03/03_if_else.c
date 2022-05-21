#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your age");
    scanf("%d", &age);

    if (age <= 70 && age >= 18)
    {
        printf("You are above 18 and below 70, So you can drive");
    }
    else
    {
        printf("You cannot drive");
    }

    return 0;
}