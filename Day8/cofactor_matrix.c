/*
Program header 
1.Objective: Write a code to find cofactor matrix
              + - +
            + 1 2 3 +
            - 4 5 6 -
            + 7 8 9 +

2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include "2x2_det_library.c"

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
     return determinant;
}

int main()
{
    int row_index, col_index,row,col;

    printf("Enter no.of rows and columns:");
    scanf("%d %d",&row,&col);
        int mat1[row][col];
        int cofactor[row][col];
    printf("Enter the %dx%d matrix elements:\n",row,col);

    for (row_index = 0; row_index < row; row_index++)
    {
        for (col_index = 0; col_index < col; col_index++) 
        {
            scanf("%d", &mat1[row_index][col_index]);  
        }
    }
    cofactor_mat(mat1,cofactor);
    int det=det_3x3(mat1);
    printf("Determinant is : %d\n",det);

    printf("\nCofactor Matrix is:\n");

      for (row_index = 0; row_index < row; row_index++)
    {
        for (col_index = 0; col_index < col; col_index++) 
        {
            printf("%d ", cofactor[row_index][col_index]);  
        }
        printf("\n");
    }

    return 0;
}

