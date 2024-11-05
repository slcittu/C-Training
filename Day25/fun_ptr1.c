/*
Program header 
1.Objective: Write code to implement Function pointer

2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
//global variables
int v1=6,v2=3;
//function prototyping
void add();
void sub();

void fpt(void (*fun_ptr)())
{
    fun_ptr();
}
//main function
void main()
{
    fpt(add);
    fpt(sub);
}

void add()
{
    printf("%d \n",v1+v2);
}

void sub()
{
    printf("%d \n",v1-v2);
}
