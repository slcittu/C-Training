/*
Program header 
1.Object`ve : Printing X pattern using * symbol
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main() 
{
    int patternSize=9, row, col;
    for(row = 0; row < patternSize; row++)
    {

        for(col = 0; col < patternSize; col++) 
        {
            if(row == col || (row + col) == (patternSize - 1))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
     return 0;
}

