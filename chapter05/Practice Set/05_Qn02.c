#include<stdio.h>
float temp(float c);

int main()
{
    float c;
    printf("Evter temp in c\n");
    scanf("%f", &c);

    printf("Temp is F is %.2f\n", temp(c));

    return 0;
}

float temp(float c)
{
    float f;
    
    f= (c * (9/5) + 32);
    
    
    return f;
    
}
