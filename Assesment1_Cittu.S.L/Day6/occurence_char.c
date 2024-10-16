/*
Program header 
1.Objective : Write a code to find no of occurences of a given character in array.
                - Take search element from user
                -Initialize count to keep track of number of occurence.
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int size,index,count=0;

    printf("Enter the no.of character you want to input:");
    scanf("%d",&size);

    char arr[size],search;


    for(index=0;index<size;index++)
    {
        printf("Enter the %d character to array: ",index+1);
        scanf(" %c",&arr[index]);
    }

    printf("Enter the element to be searched:");
    scanf(" %c",&search);

    for(index=0;index<size;index++)
    {
        if(arr[index]==search)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("Element not found!!");
    }
    else
    {
        printf("\nOccurences of %c in the array is %d times.",search,count);
    }
}