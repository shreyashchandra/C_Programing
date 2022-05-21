#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("Given Year %d is a Leap year", year);
    }
    else if (year % 400 == 0)
    {
        printf("Given year %d is a Leap year", year);
    }
    else
    {
        printf("Given year %d is not a leap year", year);
    }

    return 0;
}