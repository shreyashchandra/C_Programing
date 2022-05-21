#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

void GoodMorning()
{
    printf("GoodMoring\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("GoodAfternoon\n");
    GoodNight();
}
void GoodNight()
{
    printf("GoodNight\n");
}
int main()
{
   GoodMorning();
   return 0;
}