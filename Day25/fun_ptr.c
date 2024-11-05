/*
Program header 
1.Objective: Write code to implement Function pointer

2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

//function prototyping
void add(int,int);
void sub(int,int);

//main function
void main()
{
    void (*fun_ptr)(int,int);
    fun_ptr=add;
    fun_ptr(5,6);
    fun_ptr=&sub;
    fun_ptr(5,3);
}

void add(int v1,int v2)
{
    printf("%d \n",v1+v2);
}

void sub(int v1,int v2)
{
    printf("%d \n",v1-v2);
}
