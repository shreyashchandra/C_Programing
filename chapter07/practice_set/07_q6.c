#include <stdio.h>
int countPositiveNumbers(int *arr, int n);

int main()
{
    int arr[] = {-7, 1, 2, 3, -4, 8, -9, -6};

    int pos_count = 0;

    printf("The no of positive element in arr is : %d", countPositiveNumbers(arr, 8)  );

    return 0;
}
int countPositiveNumbers(int *arr, int n)
{
    int pos_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos_count++;
        }
    }
    return pos_count;
}