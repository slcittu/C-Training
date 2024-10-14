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