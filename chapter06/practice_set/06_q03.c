#include<stdio.h>
int change(int *a);

int main()
{
    int a = 1;
     
    printf("%d", change(&a));
   

    return 0;
}
int change(int *a){
    int temp;
    temp = 10 * *a;

    return temp;
}