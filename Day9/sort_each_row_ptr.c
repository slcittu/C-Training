/*
Program header 
1.Objective: Write a code to sort each row of an array independently
            Consider 3x3 array
            Use pointers to access array elements
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#include "printMatrix_lib.c"
void sort_by_Row(int *arr,int size)
{
    int row,col,temp;

    for(row=0;row<size-1;row++)
    {
        for(col=0;col<size-row-1;col++)
        {
            if(*(arr+col)>*(arr+col+1))
            {
                temp = *(arr+col);
                *(arr+col)=*(arr+col+1);
                *(arr+col+1)=temp;
            }
        }
    }
}


void main()
{
    int arr[3][3];
    int index1,index2;
    printf("Enter the values of a 3x3 matrix:\n");
    for(index1 = 0; index1 < 3; index1++)
    {
        for(index2 = 0; index2 < 3; index2++)
        {
            scanf("%d", &arr[index1][index2]);
        }
    }

    for(index1=0;index1<3;index1++)
    {
        sort_by_Row(arr[index1],3);
    }
    printf("Array after Sorting is:\n");
    printMatrix(3,3,arr);

    return 0;
    
}