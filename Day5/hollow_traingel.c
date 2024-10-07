/*
Program header 
1.Objective : Hollow Triangle Pattern Printing
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int rowNum,row=1,col,space;

    printf("Enter the no of rows for the triangle:");
    scanf("%d",&rowNum);

    while(row<=rowNum)
    {
        space=rowNum-row;
        while (space>0)
        {
            printf(" ");
            space--;
        }
        col=1;
        while (col<=(2*row-1))
        {
            if(row==rowNum)
            {
                if(col%2==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (col==1 || col==(2*row-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                
            }
            col++;
        }
        printf("\n");
        row++;    
    }
    return 0;
}