/*
Program header 
1.Objective :swap the elements of two array in reverse order (equal size arrays)
            - Capture size of array
            - Check for equal size
            - Then swap the elements using 
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int size1,size2,arr1[25],arr2[25],index,limit=0;

    printf("Enter the size of array 1: ");
    scanf("%d",&size1);
    printf("Enter the size of array 2: ");
    scanf("%d",&size2);

    for(index=0;index<size1;index++)
    {
        printf("Enter the %d element for Array 1: ",index+1);
        scanf("%d",&arr1[index]);
    }

    for(index=0;index<size2;index++)
    {
        printf("Enter the %d element for Array 2: ",index+1);
        scanf("%d",&arr2[index]);
    }

    if(size1!=size2)
    {
        if (size1<size2) 
        {   
            limit=size2;
            for(index=size1;index<size2;index++) 
            {
                arr1[index]=0;
            }
        }
        else
        {
            limit=size1;
            for(index=size2;index<size1;index++)
            {
                arr2[index]=0;
            }
        }

        
        for(index=0;index<limit;index++)
        {
            arr1[index]=arr1[index]+arr2[limit-1-index];
            arr2[limit-1-index]=arr1[index]-arr2[limit-1-index];
            arr1[index]=arr1[index]-arr2[limit-1-index];
        }      
    }
    else
    {
        for(index=0;index<size1;index++)
        {
            if(arr2[index]!=0)
            {
                arr1[index]=arr1[index]*arr2[size2-1-index];
                arr2[size2-1-index]=arr1[index]/arr2[size2-1-index];
                arr1[index]=arr1[index]/arr2[size2-1-index];
            }
        }
    }
    printf("\nArrays After ");
    printf("\nSwapped arrays:\n");
    printf("Array 1: ");
    for (index=0; index<size1;index++) 
    {
        printf("%d ",arr1[index]);
    }
    printf("\nArray 2: ");
    for (index =0;index<size2;index++) 
    {
        printf("%d ",arr2[index]);
    }
    printf("\n");

    return 0;


}