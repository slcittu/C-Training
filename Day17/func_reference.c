/*
Program header 
1.Objective: Write code to implemenet function using call by value
2.Revisions: Nil
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>

void call_by_val(int v1);
void call_by_ref(int *ptr);
void main()
{
    int v1;
    v1=10;
    call_by_val(v1);
    call_by_ref(&v1);
    printf("%d \t %p \n",v1,&v1);
}

void call_by_val(int v1)
{
    v1=5;
    printf("%d \t %p \n",v1,&v1);
}

void call_by_ref(int *ptr)
{
    *ptr=2;
    printf("%d \t %p \n",*ptr,ptr);
}