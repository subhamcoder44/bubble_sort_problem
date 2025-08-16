#include <stdio.h>
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)

        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printarr(arr, n);
}
int main()
{
    int arr[] = {4, 3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);
    return 0;
}