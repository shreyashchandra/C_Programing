#include <stdio.h>

int main()
{
    char s[100], n[50];
    printf("Enter your name:\n");
    scanf("%s %s", s, n);
    printf("Your name is\n%s\n%s", s, n);

    return 0;
}