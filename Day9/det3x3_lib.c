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
     return determinant;
}
