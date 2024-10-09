/*
Program header 
1.Objective :Insertion Sort (Ascending Order)
             -Array = {2,6,3,4,8,3,9,4};
             -Initially 1st element is considered as sorted element.
             - Then compare 2nd element to the stored array and insert at appropriate location
             - Repeat till entire array is sorted.
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int size,index,element,sorted_index,pass;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");

    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);

    }


    for(index=0;index<size;index++)
    {
        element=arr[index];
        sorted_index=index-1;

        while(sorted_index>=0 && arr[sorted_index]>element)
        {
            arr[sorted_index+1]=arr[sorted_index];
            sorted_index--;
        }

        arr[sorted_index+1]=element;

        printf("\n  Array after pass %d is : ",index+1);

        for(pass=0;pass<size;pass++)
        {
            printf("%d ",arr[pass]);
        }
    }

    printf("\n Sorted Arrays is :");

    for(index=0;index<size;index++)
    {
        printf("%d ",arr[index]);
    }

    return 0;
}