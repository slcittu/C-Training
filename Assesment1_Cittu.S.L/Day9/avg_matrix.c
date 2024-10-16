/*
Program header 
1.Objective: Write a code to calculate average of matrix elements, columnwise
            2,4,6
            4,3,5
            5,8,4
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void avg_matrix(int rows,int cols,int (*mat)[cols],float *average)
{
    int index_r,index_c,sum;
    for(index_c=0;index_c<cols;index_c++)
    {
        sum=0;
        for(index_r=0;index_r<rows;index_r++)
        {
            sum+=*(*(mat+index_r)+index_c);
        }
        average[index_c]=(float)sum/rows;
    }
}

void printAvg(int cols,float *average)
{
    int index;
    printf("Column-wise Average:\n");

    for(index=0;index<cols;index++)
    {
        printf("Column %d: %.2f \n",index+1,*(average+index));
    }
}

int main()
{
     int row,col,index1,index2;

    printf("Enter the no.of rows and columns:");
    scanf("%d %d",&row,&col);


    int mat[row][col];
    float average[col];

    printf("Enter the elements of the matrix:");
    for(index1=0;index1<row;index1++)
    {
        for(index2=0;index2<col;index2++)
        {
            scanf("%d",&mat[index1][index2]);
        }
    }
    avg_matrix(row,col,mat,average);

    printAvg(col,average);

    return 0;
}