#include <stdio.h>
#include <string.h>
struct employee // User define deta tyope.
{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp)
{

    printf("code is: %d\n", emp.code);
    printf("code is: %0.1f$\n", emp.salary);
    printf("code is: %s\n", emp.name);
}

int main()
{
    
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 1000;
    strcpy(ptr->name, "Shreyash");

    show(e1);
    return 0;
}