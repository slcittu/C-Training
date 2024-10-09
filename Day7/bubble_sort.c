/*
Program header 
1.Objective :Bubble Sort (Ascending Order)
             Array = {2,6,3,4,8,3,9,10};
             2 Loops
             Outer loop is for number of sorts = n-1 where n- no.of elements =Out_count
             Inner loop for number of comparisons =Out_count-1
2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>

int main()
{
    int size,index,sort_count,comparison;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");

    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);

    }

    for(sort_count=0;sort_count<size;sort_count++)
    {
        for(comparison=0;comparison<size-sort_count-1;comparison++)
        {
            if(arr[comparison]>arr[comparison+1])
            {
                int temp=arr[comparison];
                arr[comparison]=arr[comparison+1];
                arr[comparison+1]=temp;
            }
        }
    }

    printf("\n Sorted Arrays is :");

    for(index=0;index<size;index++)
    {
        printf("%d ",arr[index]);
    }

    return 0;
}

