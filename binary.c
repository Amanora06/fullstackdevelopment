#include<stdio.h>
void swap(int *x, int *y )
{
  temp= *x;
*x = *y;
*y = temp;
}
void bubble(int a [], int n)
{
    int i,j;
    for(i=0; i<n-1;i++)
    for (j = 0; j < n - i - 1; j++)
    if (arr[j] > arr[j + 1])
    swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 26,343,8,46,456,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}