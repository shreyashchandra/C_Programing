#include<stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the string\n");
    scanf("%s\n", str);
    int a = strlen(str);
    printf("The length of string str is %d\n", a);

    return 0;
}