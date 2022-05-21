#include <stdio.h>
int sum(int a, int b); // Function prototype. This repersent sum is a function which take int a and int b as an input and returns an int.
int main()
{
    int c, a, b;
    printf("Enter the value of a, b\n");
    scanf("%d %d", &a, &b);

    c = sum(a, b); // Function call
    printf("Sum is %d", c);
    return 0;
}

int sum(int a, int b) // Function Display
{
    int result;
    result = a + b;
    return result;
}