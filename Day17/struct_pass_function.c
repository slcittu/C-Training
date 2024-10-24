/*
Program header 
1.Objective: Write code to pass structure by value and by reference functions.\
            - Declare structure
            - Once call by value and modify the fields
            - Print structure fields in function(called)
            - Print the structure fields in main(calling) function
            - Once call by reference and modify the structure fields
            - Print structure fields in function (called) using indirection
            - Again print structure fields in main(calling) function
            - Print structure fields in function (called) using arrow operator
            - Again print structure fields in main(calling) function.
2.Revisions: Nil
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

struct st_fun
{
    int v1;
    char c1;
};

void call_by_val(struct st_fun val);
void call_by_ref_indirection(struct st_fun *ptr);
void call_by_ref_arrow(struct st_fun *ptr);
void print_indirection(struct st_fun *ptr);
void print_arrow(struct st_fun *ptr);


void main()
{
    struct st_fun val;
    struct st_fun *ptr;
    ptr=&val;

    val.v1=10;
    val.c1='C';
    printf("Value Before Call by Value: %d,%c\n",val.v1,val.c1);
    call_by_val(val);
    printf("Value After Call by Value(in main): %d,%c\n",val.v1,val.c1);

    call_by_ref_indirection(&val);
    printf("Value After Call by Reference(in main): %d,%c\n",val.v1,val.c1);
    call_by_ref_arrow(ptr);
    printf("Value After Call by Reference(in main): %d,%c\n",val.v1,val.c1);
}

void call_by_val(struct st_fun val)
{
    val.v1=20;
    val.c1='A';
    printf("Value After Call by Value(in function): %d,%c\n",val.v1,val.c1);
}


void call_by_ref_indirection(struct st_fun *ptr)
{
    (*ptr).v1=26;
    (*ptr).c1='D';
     printf("Value After Call by Reference(using indirection): %d,%c\n",(*ptr).v1,(*ptr).c1);
}


void call_by_ref_arrow(struct st_fun *ptr)
{
    ptr->v1=40;
    ptr->c1='F';
}