#include <stdio.h>;

int main()
{
    int radius, height;
    printf("What is the radius of cylinder\n");
    scanf("%d", &radius);
    printf("what is the height of the cylinder");
    scanf("%d", &height);

    float pi = 3.14;

    printf("The area of cylinder %f\n", pi * radius * radius * height);

    return 0;
}