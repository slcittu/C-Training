/*
Program header 
1.Objective: Write a code to find the determinant of 2x2 matrix
            1 2
            3 4

            1*4-2*3=-2
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include "2x2_det_library.c"

int main()
{
    int row_index, col_index,determinant;;
    int mat1[2][2];

    printf("Enter the 2x2 matrix elements:\n");

    for (row_index = 0; row_index < 2; row_index++)
    {
        for (col_index = 0; col_index < 2; col_index++) 
        {
            scanf("%d", &mat1[row_index][col_index]);  
        }
    }
    determinant=(mat1);
    printf("Determinant= %d",determinant);
    return 0;
}

