/*
Program header 
1.Objective :Reverse the elements of a char array of 10 characters and also display the size of array
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

int main()
{
    char arr[10],temp;
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter %d character to the array: ",i+1);
        scanf(" %c",&arr[i]);
    }

    for ( i = 0,j=9; i < j; i++,j--)
    {   
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nReversed array is: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%c",arr[i]);
    }
    
    printf("Size of array is %d",sizeof(arr));
    return 0;
}