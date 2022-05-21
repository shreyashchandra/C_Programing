#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // it genrate random no. between 1 to 100.
    printf("The number is %d\n", number);

    // Keep running the loop untill the number is guessed.

    return 0;
}