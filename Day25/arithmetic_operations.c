/*
Program header 
1.Objective: Write code to implement Arithmetic operations using functions and call the functions using pointers

2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

//function prototyping
void add(int,int);
void sub(int,int);
void multiply(int,int);
void divide(int,int);

//main function
void main()
{
    // void (*fun_ptr)(int,int);
    // fun_ptr=add;
    // fun_ptr(6,3);
    // fun_ptr=sub;
    // fun_ptr(6,3);
    // fun_ptr=multiply;
    // fun_ptr(6,3);
    // fun_ptr=divide;
    // fun_ptr(6,3);

    void (*fun_ptr[])(int,int)={add,sub,multiply,divide};
    int choice,v1=6,v2=3;

    printf("Enter the choice: \n0:Add \t1:Sub \t2:Multiply \t3:Divide: ");
    scanf("%d",&choice);
    (fun_ptr[choice])(v1,v2);
}

void add(int v1,int v2)
{
    printf("Sum: %d\n",v1+v2);
}

void sub(int v1,int v2)
{
    printf("Difference: %d\n",v1-v2);
}

void multiply(int v1,int v2)
{
    printf("Product: %d\n",v1*v2);
}

void divide(int v1,int v2)
{
    printf("Quotient: %d\n",v1/v2);
}