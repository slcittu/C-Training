/*
Program header 
1.Objective :Delete an element from array present at index given by user
                arr={1,4,2,8,5}
                del_index=3
                arr={1,4,2,5,0}
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int size,index,del;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];

    for(index=0;index<size;index++)
    {
        printf("Enter the %d element:",index+1);
        scanf(" %d",&arr[index]);
    }

    printf("Enter the index to be deleted:");
    scanf("%d",&del);

    if(del>size-1)
    {
        printf("INVALID INDEX!!");
        return 0;
    }
    for(index=del;index<size-1;index++)
    {
        arr[index]=arr[index+1];
    }

    arr[size-1]=0;

    printf("Array after deletion:");
    for(index=0;index<size;index++)
    {
        printf("%d ", arr[index]);
    }

    printf("\n");

    return 0;

}