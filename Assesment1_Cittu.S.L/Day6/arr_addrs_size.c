/*
Program header 
1.Objective :1.Scan and print elements of array
             2.Find the address of each element and size of array
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
    printf("\nAddress of each element are: ");
     for(i=0;i<10;i++)
    {
        printf("%x ",&arr[i]);
        
    }
    printf("\nSize of array = %d",sizeof(arr));
    return 0;
}