/*
Program header 
1.Objective: Write a code to generate 3x3 matrix with following conditions
            - Capture central element from user
            - Ceck for number > 0
            - All diagonal elements (corners of mat) should be quare of central number.
            - All laterals adjucents (Horizontal /vertical) should be cube of central number

2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include "printMatrix_lib.c"

int main()
{
    int centreElement;
    int arr[3][3],square,cube,row,col;

    printf("Enter the centre element: ");
    scanf("%d",&centreElement);

    square=centreElement*centreElement;
    cube=centreElement*centreElement*centreElement;


    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            if(row==1 && col==1)
            {
                *(*(arr+row)+col)=centreElement;
            }
            else if((row==0||row==2)&&(col==0 || col==2))
            {
               *(*(arr+row)+col)=square;
            }
            else
            {
                *(*(arr+row)+col)=cube;
            }
        }
    }
    printf("The generated matrix is :\n");
    printMatrix(3,3,arr);
    return 0;
    
}