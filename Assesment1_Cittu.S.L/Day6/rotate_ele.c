/*
Program header 
1.Objective : Rotate elements of an array to the right.
                First -> Second -> Third -> ... last -> First
                input:1,2,3,4,5
                output:5,1,2,3,4
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

int main()
{
    int size,index,last;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for(index=0;index<size;index++)
    {
        printf("Element %d: ",index+1);
        scanf("%d",&arr[index]);
    }
    if(size>1)
    {
        last=arr[size-1];

        for(index=size-1;index>0;index--)
        {
            arr[index]=arr[index-1];
        }
        arr[0]=last;
    }
    printf("\nArray after rotation:");
    for(index=0;index<size;index++)
    {
        printf("%d ",arr[index]);
    }

}