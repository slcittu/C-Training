#include <stdio.h>

void printArr( int arr[],int);

void main()
{
    int arr[5]={1,2,3,4,5};

    printArr(arr,5);

}

void printArr(int arr[],int n)
{
    int index=0;
    for(index=0;index<n;index++)
    {
        printf("%d ",arr[index]);
    }
}