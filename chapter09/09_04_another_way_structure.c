#include<stdio.h>
#include<string.h>
struct employee //User define deta tyope.
{
   int code;
   float salary;
   char name[20];
};


int main()
{

    struct employee facebook = {100, 24.5, "Shreyash"};

    printf("code is: %d\n", facebook.code);
    printf("code is: %f\n", facebook.salary);
    printf("code is: %s\n", facebook.name);
    
    
    

    return 0;
}