/*
Program header 
1.Objective: Define a structure, then create an array of structure to read data in member fields and print them.
2.Revisions: Nil
3.Date & time of revision :21/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct my_struct
{
    int v1;
    struct  my_str2
    {
        int str2_v1;
        char str2_c1;
    }my_str1;
    char c1;
};

void main()
{
    struct my_struct st_arr[5];
    int index;

    for(index=0;index<5;index++)
    {   
        printf("Printf enter an integer: ");
        scanf("%d",&st_arr[index].v1);
        
    }
    printf("Entered integers: ");
    for(index=0;index<5;index++)
    {   
        printf("%d ",st_arr[index].v1);
    }
}