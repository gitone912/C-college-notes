#include <stdio.h>

int array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("its first one %d \n", arr[i]);
    }
}

int array_two(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("its sec one %d \n", arr[i]);
    }
}

int main()
{   int a=7;
    int arr[] = {1, 6, 7, 3, 5, 9, 2};
    array(arr, a);
    array_two(arr, a);
}