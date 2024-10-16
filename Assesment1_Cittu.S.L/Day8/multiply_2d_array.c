/*
Program header 
1.Objective: Write a code to multiply 2 matrices
            - Check for matrix1 column and matrix2 row to be equal
            - Multiply the 2 matrices and store result in 3rd matrix
            -mat1,mat2,res_mat3
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int row1, col1,row2,col2, row_index, col_index,mul_index;

    printf("Enter the number of ROWS and COLUMNS of 1st matrix: ");
    scanf("%d %d", &row1, &col1);
    
    int mat1[row1][col1];

    printf("Enter the matrix elements:\n");

    for (row_index = 0; row_index < row1; row_index++)
    {
        for (col_index = 0; col_index < col1; col_index++) 
        {
            scanf("%d", &mat1[row_index][col_index]);  
        }
    }
    
    printf("Enter the number of ROWS and COLUMNS of @nd matrix: ");
    scanf("%d %d", &row2, &col2);
    
    int mat2[row2][col2];

    printf("Enter the matrix elements:\n");

    for (row_index = 0; row_index < row2; row_index++)
    {
        for (col_index = 0; col_index < col2; col_index++) 
        {
            scanf("%d", &mat2[row_index][col_index]);  
        }
    }
    if(col1!=row2)
    {
        printf("Error!!matrix1 column and matrix2 row should be equal... ");
        return 0;
    }

    int res_mat3[row1][col2];

    for(row_index= 0;row_index<row1;row_index++)
    {
        for(col_index= 0;col_index<col2;col_index++)  
        {
            res_mat3[row_index][col_index]= 0;
        }
    }
    for(row_index= 0;row_index<row1;row_index++)
    {
        for(col_index= 0;col_index<col2; col_index++)  
        {
            for(mul_index= 0;mul_index<col1; mul_index++)
            {
                res_mat3[row_index][col_index]+=mat1[row_index][mul_index] * mat2[mul_index][col_index];
            }
        }
    }

    printf("The Resultant 2-D Array after Multiplication is:\n");

    for (row_index = 0; row_index < row1; row_index++)
    {
        for (col_index = 0; col_index < col1; col_index++)  
        {
            printf("%d\t", res_mat3[row_index][col_index]);
        }
        printf("\n");
    }

    return 0;
}

