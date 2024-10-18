/*
Program header 
1.Objective: Define 2 different structure with integer array as members and then check the size of both arrays to perform addition of their elements considering the length of smaller array
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct small_arr
{
    int arr[10];
};

struct large_arr
{
    int arr[12];
};


void main()
{
    struct small_arr a1;
    struct large_arr a2;

    int n1=sizeof(a1.arr)/sizeof(int);
    int n2=sizeof(a2.arr)/sizeof(int);
    int index;

    printf("Enter %d elements to Array 1: ",n1);
    for(index=0;index<n1;index++)
    {
        scanf("%d",&a1.arr[index]);
    }
    printf("Enter %d elements to Array 2: ",n2);
    for(index=0;index<n2;index++)
    {
        scanf("%d",&a2.arr[index]);
    }
    printf("Sum of array elements:\n");
    if(n1<n2)
    {
        for(index=0;index<n1;index++)
        {
            printf(" %d",(a1.arr[index]+a2.arr[index]));
        }
    }
    else
    {
         for(index=0;index<n2;index++)
        {
            printf(" %d",(a1.arr[index]+a2.arr[index]));
        }
    }
}