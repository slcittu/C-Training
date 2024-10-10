/*
Program header 
1.Objective: Function implementation basic
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
//prototyping
void array_addition(int mat1[],int mat2[]);
int main()
{
    int mat1[5]={1,2,3,4,5};
    int mat2[5]={5,4,3,2,1};

    array_addition(mat1,mat2);

    return 0;
}

void array_addition(int mat1[],int mat2[])
{
    int index;


    for(index=0;index<5;index++)
    {
        mat1[index]+=mat2[index];
    }

    printf("Array after addition: ");
     for(index=0;index<5;index++)
    {
        printf("%d ",mat1[index]);
    }

}

