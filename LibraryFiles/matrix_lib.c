//function to print a matrix
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


//function to find transpose of a matrix
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

//function to find cofactor matrix

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
//function to find determinant of a 2x2 matrix
int det(int mat[2][2])
{
    int deter=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
    return deter;
   
}

//function to find determinant of 3x3 matrix

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
}