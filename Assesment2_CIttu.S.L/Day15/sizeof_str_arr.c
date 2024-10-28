/*
Program header 
1.Objective: Write a c program to calculate size of structure array. Print total array size and also individual structure size.
            Declare structure as local variable
2.Revisions: Nil
3.Date & time of revision :21/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>


void main()
{
    struct my_struct
    {
        int v1;
        char c1;
        int v2;
    }st_arr[5];
    printf("Total Array size: %d\n",sizeof(st_arr));
    printf("Individual structure size: %d\n",sizeof(st_arr[1]));
   
}