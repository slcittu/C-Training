/*
Program header 
1.Objective :Selection Sort
             -Array = {2,6,3,4,8,3,9,4};
             Descending
             -Find the largest element and insert it to the 1st location 
             -Find 2nd largest and insert at 2nd location
             -Continue to find largest in remaining elements for n-1 times.
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>

int main()
{
    int size,index,temp,large_index,new_index,pass;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");

    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);

    }
    for(index=0;index<size-1;index++)
    {
        large_index=index;

        for(new_index=index+1;new_index<size;new_index++)
        {
            if(arr[new_index]>arr[large_index])
            {
                large_index=new_index;
            }
        }

        if(large_index!=index)
        {
            temp=arr[index];
            arr[index]=arr[large_index];
            arr[large_index]=temp;
        }
        
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
