#include <stdio.h>

int main()
{
    char str[] = "Shreyash";
    // char str[] = {'S', 'H', 'R', 'E', 'Y', 'A', 'S', 'H'};

    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}