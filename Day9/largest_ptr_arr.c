/*
Program header 
1.Objective: Write a code to find largest element of 3x3 (2d array) using pointers
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    int arr[3][3];
    int index1,index2,largest;
    printf("Enter the values of a 3x3 matrix:\n");
    for(index1 = 0; index1 < 3; index1++)
    {
        for(index2 = 0; index2 < 3; index2++)
        {
            scanf("%d", &arr[index1][index2]);
        }
    }
    largest = arr[0][0];
    for(index1 = 0; index1 < 3; index1++)
    {
        for(index2 = 0; index2 < 3; index2++)
        {
            if(largest<(*(*(arr+index1)+index2)))
            {
                largest = *(*(arr+index1)+index2);
            }
        }
    }
    printf("Largest = %d",largest);
}