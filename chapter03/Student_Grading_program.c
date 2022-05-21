#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks < 0 && marks > 100)
    {
        printf("Your entry is WRONG\n");
    }
    else if (marks < 70)
    {
        printf("Your Grade is D\n");
    }
    else if (marks > 70 && marks < 80)
    {
        printf("Your Grade is C");
    }
    else if (marks > 80 && marks < 90)
    {
        printf("Your Grade is B");
    }
    else if (marks > 90)
    {
        printf("Your Grade is A");
    }

    return 0;
}