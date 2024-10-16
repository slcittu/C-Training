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
