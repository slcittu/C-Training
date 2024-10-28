//write a code to return structure pointer from function and display the structure fields in the main

#include<stdio.h>

struct myStruct
{
    int v1;
    int *var_ptr;
}str,*st_ptr;

struct myStruct *getData(struct myStruct *p);

void main()
{
    
    st_ptr=&str;
    st_ptr->var_ptr=&st_ptr->v1;
    struct myStruct *str_ptr_copy=getData(st_ptr);
    printf("The value is %d at address %x .",*(str_ptr_copy->var_ptr),str_ptr_copy->var_ptr);
}
//function to take input from user
struct myStruct *getData(struct myStruct *p)
{
    printf("Enter an intger: ");
    scanf("%d",p->var_ptr);

    return p;
}
