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

    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 60;
    strcpy(facebook[0].name,"shreyash");
    

    return 0;
}