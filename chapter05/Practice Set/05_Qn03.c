#include <stdio.h>
float force(float mass);

int main()
{
    float mass;
    printf("Enter the mass  in kg\n");
    scanf("%f", &mass);

    printf("The force exreted by earth on mass of %.2f kg is %.2f N\n", mass, force(mass));

    return 0;
}
float force(float mass)
{
    float force;
    force = mass * 9.8;
    return force;
}
