/*
Program header 
1.Objective: Addition of array using function , use static keyword.
2.Revisions: Nil
3.Date & time of revision :10/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void arr_add(int mat1[],int mat2[]);
int mat1[5] = {1,2,3,4,5};
int mat2[5] = {5,4,3,2,1};
void main()
{
    int index;
    for(index=0;index<5;index++)
    {
        arr_add(mat1,mat2);
    }
}
void arr_add(int mat1[],int mat2[])
{
    int index;
    static int count=1;
    int res[5];
    for(index=0;index<5;index++)
    {
        res[index] = mat1[index]+mat2[index];
    }
    printf("Array after addition = ");
    for(index=0;index<5;index++)
    {
        printf("%d\t",res[index]);
    }
    
    printf("\nValue of count = %d\n",count);
    printf("\n");
    count++;

}