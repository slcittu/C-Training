/*
Program header 
1.Objective : Implementing Pascal's Triangle with Hexadecimal values
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main() {
    int numRows=6, row, col, space;
    long coeff;
    for (row = 0; row < numRows; row++) 
    {

        for (space = 0; space < numRows - row - 1; space++) {
            printf("  ");
        }
        coeff = 1; 
        for (col = 0; col <= row; col++) 
        {
            printf("%4lX", coeff); 
            coeff = coeff * (row - col) / (col + 1);
        }
        printf("\n"); 
    }

    return 0;
}