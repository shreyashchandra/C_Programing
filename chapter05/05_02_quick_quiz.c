#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

void GoodMorning()
{
    printf("GoodMoring\n");
}
void GoodAfternoon()
{
    printf("GoodAfternoon\n");
}
void GoodNight()
{
    printf("GoodNight\n");
}
int main()
{
    int a;

    GoodMorning();
    printf("\n");
    GoodAfternoon();
    printf("\n");
    GoodNight();

    return 0;
}