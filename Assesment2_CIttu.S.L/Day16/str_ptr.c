/*
Program header 
1.Objective: methods of accessing structure variables using pointers
2.Revisions: Nil
3.Date & time of revision :22/10/24
4.Author Name: Cittu S L
*/


#include <stdio.h>
#pragma pack(1)

//structure definition
struct st_name
{
    int var1;
    char c1;
}*st_ptr;

//main function

void main()
{
    struct st_name st_var;
    //struct st_name *st_ptr = &st_var;
    st_ptr=&st_var;
    st_var.var1=10;
    st_var.c1='c';

    //methods of accessing structure variables using pointers
    printf("%d \n",(*st_ptr).var1);//indirection of pointer to var1
    printf("%c \n",(*st_ptr).c1);//indirection of pointer to c1

    printf("%d \n",st_ptr->var1);//Accessing using arrow operator
    printf("%c \n",st_ptr->c1);
}