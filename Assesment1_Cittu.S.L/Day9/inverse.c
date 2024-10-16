/*
Program header 
1.Objective: Write a code to find Inverse of marix

            Inv of matrix = (1/Det) * Transpose of cofactor mat)

            mat 1 4 7
                2 5 6
                3 6 9
            inv 1/det 4/det 7/det
                2/det 5/det 6/det
                3/det 6/det 9/det
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

#include "C:\Users\DELL\OneDrive\Documents\quest\Day8\2x2_det_library.c"
#include "det3x3_lib.c"
#include "transpose_mat_lib.c"
//#include "cofactor_mat_lib.c"
#include "printMatrix_lib.c"
void cofactor_mat(int mat[3][3],int cofactor[3][3])
{
    int small[2][2];
    //int determinant=0;
    int index1,index2,s_row,s_col,row,col,sign=1;
    for(index1=0;index1<3;index1++)
    {   
        for(index2=0;index2<3;index2++)
        {
            s_row=0;
            for(row=0;row<3;row++)
            {
                if(row==index1)
                {
                    continue;
                }
                s_col=0;
                for(col=0;col<3;col++)
                {
                    if(col==index2)
                    {
                        continue;
                    }
                    small[s_row][s_col]=mat[row][col];
                    s_col++;
                }
                s_row++;
            }
                sign=1;
                if((index1+index2)%2!=0)
                {
                    sign=-1;
                }
                cofactor[index1][index2]=det(small)*sign;
                cofactor[index1][index2]*=mat[index1][index2];
        }
    }
}
void inverse(int row,int col,int mat[row][col])
{
    int transpose[col][row],cofactor[row][col];
    float inv[row][col];
    int determinant,r_index,c_index;

    determinant=det_3x3(mat);
    if(determinant==0)
    {
        printf("The inverse does not exist(Determinant is ZERO)!!!\n");
        return;
    }
    cofactor_mat(mat,cofactor);

    transpose_mat(row,col,cofactor,transpose);

    for(r_index=0;r_index<row;r_index++)
    {
        for (c_index=0;c_index<col;c_index++)
        {
            inv[r_index][c_index]=transpose[r_index][c_index]/(float)determinant;
        }
        
    }
     int index1,index2;
    printf("\nInverse Matrix is: \n");
    for(index1=0;index1<row;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            printf("%.2f ",inv[index1][index2]);
        }
        printf("\n");
    }
}

int main()
{
    int row,col,index1,index2;

    printf("Enter the no.of rows and columns:");
    scanf("%d %d",&row,&col);


    int mat[row][col];

    printf("Enter the elements of the matrix:");
    for(index1=0;index1<row;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            scanf("%d",&mat[index1][index2]);
        }
    }

    inverse(row,col,mat);

    return 0;
}