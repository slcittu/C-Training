/*
Program header 
1.Objective: Write a code to count the no.of occurences of a given number in 3x3 matrix.
            - Create a linear array to store number of occurences of each number
            - Print the number occuring maximum no,of time.
            - Also print count of respective number.

2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include "printMatrix_lib.c"
#define SIZE 3

int main()
{
    int arr[SIZE][SIZE];
    int occurences[10]={0};
    int *ptr=&arr[0][0];
    int Number,flag=0;
    int maxCount=0;
    int maxNumber=-1;

    int index1,index2;
    printf("Enter the values of a 3x3 matrix:\n");
    for(index1=0;index1<9;index1++)
    {
        scanf("%d",(ptr+index1));
    }

    printf("The Entered Matrix is: \n");
    printMatrix(SIZE,SIZE,arr);

    for (index1 = 0; index1 < 9; index1++)
    {
        occurences[index1]++;
    }

    printf("Enter a number to count its occurences: ");
    scanf("%d",&Number);

    for(index1=0;index1<9;index1++)
    {
        if(*(ptr+index1)==Number)
        {
            printf("The number %d occured %d times.\n ",Number,occurences[index1]);
            flag=1;
            break;
        }
    }

    if(!flag)
    {
        printf("The number %d not found!!!\n",Number);
    }

    for(index1=0;index1<9;index1++)
    {
        if(occurences[index1]>maxCount)
        {
            maxCount=occurences[index1];
            maxNumber=*(ptr+index1);
        }
    }
    printf("The number %d occured the most with a count of %d..\n",maxNumber,maxCount);
    return 0;
}