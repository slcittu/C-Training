/*
Program header 
1.Objective :Insert an element to an index position and right shift the remaining elements
                
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

int main()
{
    int size,index,insert,new_ele;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size+1];

    for(index=0;index<size;index++)
    {
        printf("Enter the %d element:",index+1);
        scanf(" %d",&arr[index]);
    }

    printf("Enter the index to be Inserted:");
    scanf("%d",&insert);

    if(insert>size)
    {
        printf("INVALID INDEX!!");
        return 0;
    }

    printf("Enter the element to be inserted:");
    scanf("%d",&new_ele);

    for(index=size;index>insert;index--)
    {
        arr[index]=arr[index-1];
    }

    arr[insert]=new_ele;

    printf("Array After insertion:");

      for(index=0;index<=size;index++)
    {
        printf("%d ", arr[index]);
    }

      printf("\n");

    return 0;
}