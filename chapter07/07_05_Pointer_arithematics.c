#include<stdio.h>

int main()
{
    int i = 5;
    int *k = &i;

    printf("The value of k is %u\n", k);
    // k++;
    // k++;
    // k++;
    k = k + 4;
    
    printf("The value of k is %u\n", k);


    return 0;
}