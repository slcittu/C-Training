/*
Program header 
1.Objective :Find the largest element in an array and print its index and address.
                
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    
    int size,index,largest=0,large_index=-1;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];

    for(index=0;index<size;index++)
    {
        printf("Enter the %d element:",index+1);
        scanf(" %d",&arr[index]);
    }
    for(index=0;index<size;index++)
    {
        if(arr[index]>largest)
        {
            largest=arr[index];
            large_index=index;
        }
    }
    printf("Largest element = %d\nIndex = %d \nAddress = %X",largest,large_index,&arr[large_index]);

    return 0;
}