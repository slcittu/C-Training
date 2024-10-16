/*
Program header 
1.Objective :Append arr2 at the end of arr1 and find the size of merged array to be equal to sum of individual sizes of arrays.
            - Check if Destination array is large enough to accomodate elements of both arrays.
            -Arr1={} of size 20
            -arr2={} of size 5
            -Capture 5 elements in each array
            -Then append arr2 to arr1.
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int arr1[20],merged_size;
    int size1,size2;

    int index;
    printf("Enter the size of Array 1:");
    scanf("%d",&size1);
    printf("Enter the size of Array 2:");
    scanf("%d",&size2);

    int arr2[size2];
    
    printf("Enter 5 elements for array1:\n ");
    for(index=0;index<size1;index++)
    {
        scanf("%d",&arr1[index]);
    }

    printf("Enter 5 elements for array2:\n ");
    for(index=0;index<size2;index++)
    {
        scanf("%d",&arr2[index]);
    }

    merged_size=size1+size2;

    if(merged_size<=20)
    {
        for(index=0;index<size2;index++)
        {
            arr1[size1+index]=arr2[index];
        }

        printf("Merged array after appending\n");
         for(index=0;index<merged_size;index++)
        {
            printf("%d ",arr1[index]);
        }
        printf("\n");
    }
    else
    {
        printf("Destination array does not have enough space");
    }

    return 0;
}