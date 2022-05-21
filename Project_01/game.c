#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // it genrate random no. between 1 to 100.
    // printf("The number is %d\n", number);

    // Keep running the loop untill the number is guessed.
    
    int guess, nguesses=1;
    do{
         printf("Guess the number between 1 to 100\n");
         scanf("%d", &guess);

         if (guess>number)
         {
             printf("Lower number please!\n");
         }
         else if (guess<number)
         {
             printf("Higher number please!\n");
         }
         else
         {
             printf("You guessed it in %d attempts\n", nguesses);
         }
         nguesses++;
         
         
         
    }while(guess != number);

    return 0;
}