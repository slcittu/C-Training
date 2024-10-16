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
    int first,last;
    for ( first = 0; first < 10; first++)
    {
        printf("Enter %d character to the array: ",first+1);
        scanf(" %c",&arr[first]);
    }

    for ( first = 0,last=9; first < last; first++,last--)
    {   
        temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
    }
    printf("\nReversed array is: ");
    for ( first = 0; first < 10; first++)
    {
        printf("%c",arr[first]);
    }
    
    printf("\nSize of array is %d",sizeof(arr));
    return 0;
}