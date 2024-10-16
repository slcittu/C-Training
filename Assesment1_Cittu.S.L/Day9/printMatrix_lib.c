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