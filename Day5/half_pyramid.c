/*
Program header 
1.Objective : Half Pyramid Pattern Printing
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int rowNum,row=1,col;
    printf("Enter the nof of rows for the pyramid:");
    scanf("%d",&rowNum);

    while(row<=rowNum)
    {
        col=1;
        while(col<=row)
        {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
    }
    return 0;
}