#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the lenght of side\n");
    scanf("%d", &side);
    printf("The area of square is %f sq.unit\n", pow(side, 2));

    return 0;
}