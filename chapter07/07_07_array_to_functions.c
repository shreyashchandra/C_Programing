#include <stdio.h>
// void printarray(int *ptr, int n);

void printarray(int ptr[], int n);


int main()
{
    int i[] = {1, 2, 3, 4, 5, 6, 7};

    printarray(i, 7);

    return 0;
}
void printarray(int ptr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i] );
    }
}