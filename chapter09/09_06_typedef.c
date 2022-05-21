#include <stdio.h>
#include <string.h>
typedef struct employee // User define deta tyope.
{
    int code;
    float salary;
    char name[20];
}emp; //custom data types.
void show(emp emp1)
{

    printf("code is: %d\n", emp1.code);
    printf("code is: %0.1f$\n", emp1.salary);
    printf("code is: %s\n", emp1.name);
}

int main()
{
    
    emp e1;
    emp *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 1000;
    strcpy(ptr->name, "Shreyash");

    show(e1);
    return 0;
}