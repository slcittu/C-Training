/*
Program header 
1.Objective: Write a code to find the determinant of 3x3 matrix
            1 2 3
            4 5 6
            7 8 9
            + - +
        det= 1*det1(2x2)-2*det2(2x2)+3*det3(2x2)
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include "2x2_det_library.c"

int det_3x3(int mat[3][3])
{
    int small[2][2];
    int determinant=0;
    int index,s_row,s_col,row,col;
    for(index=0;index<3;index++)
    {   
        s_row=0;
        for(row=1;row<3;row++)
        {
            s_col=0;

            for(col=0;col<3;col++)
            {
                if(col==index)
                {
                        continue;
                }
                small[s_row][s_col]=mat[row][col];
                s_col++;
            }
            s_row++;
        }

        if(index%2==0)
        {
            determinant+=mat[0][index]*det(small);
        }
        else
        {
             determinant-=mat[0][index]*det(small);
        }

    }
     printf("Determinant= %d",determinant);
}

int main()
{
    int row_index, col_index;
    int mat1[3][3];

    printf("Enter the 3x3 matrix elements:\n");

    for (row_index = 0; row_index < 3; row_index++)
    {
        for (col_index = 0; col_index < 3; col_index++) 
        {
            scanf("%d", &mat1[row_index][col_index]);  
        }
    }
    det_3x3(mat1);
    return 0;
}

