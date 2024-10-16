/*
Program header 
1.Objective :Scan and print elements of array
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int arr[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("Enter %d element into the array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray Elements are: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
        
    }

    return 0;
}