/*
Program header 
1.Objective: Write a code to find sum of array elements using pointer method
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

int main()
{
    int size,index;
    int sum=0;

    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size];
    int *ptr=arr;

    printf("Enter the array elements:\n");
    for(index=0;index<size;index++)
    {
        scanf("%d",(ptr+index));
    }

    for(index=0;index<size;index++)
    {
        sum+=*(ptr+index);
    }

    printf("sum of array = %d",sum);
    return 0;
}