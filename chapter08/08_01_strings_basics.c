#include <stdio.h>

int main()
{
    char str_a[] = {'S', 'H', 'R', 'E', 'Y', 'A', 'S', 'H', '\0'};
    //**OR WE CAN USE**//
    char str_b[] = "SHREYASH";

    //** 1st way to print string **//
    char *ptr = str_a;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    //** 2nd way to print string **//
    char *str_c = "SHREYASH";
    printf("%s\n", str_c);

    printf("%s", str_b);

    return 0;
}