/*
Program header 
1.Objective: Write a code to read and print 2-D array
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int row, col, row_index, col_index;

    printf("Enter the number of ROWS and COLUMNS: ");
    scanf("%d %d", &row, &col);
    
    int arr_2d[row][col];

    printf("Enter the matrix elements:\n");

    for (row_index = 0; row_index < row; row_index++)
    {
        for (col_index = 0; col_index < col; col_index++) 
        {
            scanf("%d", &arr_2d[row_index][col_index]);  
        }
    }

    printf("The 2-D Array is:\n");

    for (row_index = 0; row_index < row; row_index++)
    {
        for (col_index = 0; col_index < col; col_index++)  
        {
            printf("%d\t", arr_2d[row_index][col_index]);
        }
        printf("\n");
    }

    return 0;
}
