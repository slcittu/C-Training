/*
Program header 
1.Objective: Declare array as member of structure and scan the variables.
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

struct sample_arr
{
    int arr[10];
};

void main()
{
    struct sample_arr l1;

    printf("Enter the some random numbers ");
    for(int index=0;index<10;index++)
    {
        scanf("%d",&l1.arr[index]);
    }

    printf("The Array elements are: ");
    for(int index=0;index<10;index++)
    {
        printf("%d ",l1.arr[index]);
    }
}
