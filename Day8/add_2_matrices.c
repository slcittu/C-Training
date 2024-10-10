/*
Program header 
1.Objective: Write a code to add 2 matrices
            - Check if dimensions of 2 matrices is same.
            - Add elements of identical indexes and store result in 3rd matrix.
            -mat1,mat2,res_mat3
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int row1, col1,row2,col2, row_index, col_index;

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
    if(!(row1==row2 && col1==col2))
    {
        printf("Error!! Dimensions of both matrix are different..");
        return 0;
    }

    int res_mat3[row1][col1];

    for (row_index = 0; row_index < row2; row_index++)
    {
        for (col_index = 0; col_index < col2; col_index++) 
        {
            res_mat3[row_index][col_index]=mat1[row_index][col_index]+mat2[row_index][col_index];
        }
    }

    printf("The Resultant 2-D Array after addition is:\n");

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

