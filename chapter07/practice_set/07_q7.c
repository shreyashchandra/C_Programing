#include <stdio.h>
void printtable(int *table, int num, int n);

int main()
{
    int table[3][10];

    printtable(table[0], 2, 10);
    printtable(table[1], 7, 10);
    printtable(table[2], 9, 10);

    return 0;
}
void printtable(int *table, int num, int n)
{
    printf("The table of %d is ::-\n", num);
    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }
    printf("xxxxxxxxxx\n\n");
}