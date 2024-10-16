/*
Program header 
1.Object`ve : Printing C pattern using * symbol
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int row,col;
void main()
{

    for (row=0;row<7;row++)
    {
     
        for(col=0;col<6;col++)
        {
            if(col==0)
            {
                printf("* ");
            }
            if(row==0)
            {
                printf("* ");
            }
            if(row==6)
            {
                printf("* ");
            }
        
        }
        printf("\n");
        
    }
}