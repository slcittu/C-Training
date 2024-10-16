/*
Program header 
1.Objective : Rotate elements of an array to the right.(Multiple rotations)
               
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int size,shifts,index,last;
    char ch='y';

    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for(index=0;index<size;index++)
    {
        printf("Element %d: ",index+1);
        scanf("%d",&arr[index]);
    }
    while(ch=='Y' ||ch=='y')
    {
        printf("Enter the no.of positions to rotate: ");
        scanf("%d",&shifts);

        for(int index1=0;index1<shifts;index1++)
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
        printf("Enter (Y) to continue...:");
        scanf(" %c",&ch);
    }
    

}