/*
Program header 
1.Objective : Search an element in an integer  array. Display the index and address of element
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int arr[20];
    int search,iteration,size,flag=0;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&size);
    for(iteration=0;iteration<size;iteration++)
    {
        printf("\nEnter the %d element of the array:",iteration+1);
        scanf("%d",&arr[iteration]);
    }

    printf("Enter the elment to be searched in the array: ");
    scanf("%d",&search);

    for(iteration=0;iteration<size;iteration++)
    {
        if(arr[iteration]==search)
        {
            printf("Element found in the array at index- %d with address %x",iteration,&arr[iteration]);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Enement not found in the array!!");
    }
    return 0;
}