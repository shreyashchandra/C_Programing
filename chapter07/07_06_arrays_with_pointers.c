#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr = &marks;
    // ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("The marks of students are: \n");
    for (int i = 0; i < 4; i++)
    {

        printf("%d,", marks[i]);
    }

    return 0;
}