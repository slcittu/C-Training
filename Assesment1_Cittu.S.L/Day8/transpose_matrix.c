/*
Program header 
1.Objective: Write a code to find the transpose of the matrix
         1 2 3
         4 5 6
         7 8 9
         Transpose
         1 4 7 
         2 3 8
         3 6 9

2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
void transpose_mat(int rows,int col,int mat[rows][col],int transpose[col][rows])
{
    int index1,index2;

    for(index1=0;index1<rows;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            transpose[index2][index1]=mat[index1][index2];
        }
    }
}

void printMatrix(int rows,int col,int mat[rows][col])
{
    int index1,index2;
    for(index1=0;index1<rows;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            printf("%d ",mat[index1][index2]);
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
    int transpose[col][row];

    printf("Enter the elements of the matrix:");
    for(index1=0;index1<row;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            scanf("%d",&mat[index1][index2]);
        }
    }

    transpose_mat(row,col,mat,transpose);

    printf("Original Matrix is: \n");
    printMatrix(row,col,mat);

    printf("Transpose of the matrix is :\n");
    printMatrix(row,col,transpose);

    return 0;
}