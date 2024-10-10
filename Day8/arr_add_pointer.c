/*
Program header 
1.Objective: Addition of array using function and pointers
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void arr_add(int mat1[],int mat2[]);

void main()
{
    int mat1[5] = {1,2,3,4,5};
    int mat2[5] = {5,4,3,2,1};
    arr_add(mat1,mat2);
}
void arr_add(int *mat1,int *mat2)
{
    int lc;
    int res[5];
    for(lc=0;lc<5;lc++)
    {
        res[lc] = mat1[lc]+mat2[lc];
    }
    printf("Resultant array = ");
    for(lc=0;lc<5;lc++)
    {
        printf("%d\t",res[lc]);
    }

}