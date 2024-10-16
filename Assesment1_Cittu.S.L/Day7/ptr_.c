/*
Program header 
1.Objective :Create integer and character pointer and print following
            i) Dereferene value
            ii)Address of variable
            iii) Address of pointers
            iv) Size of pointers
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    int var,*int_ptr;

    char ch_var,*char_ptr;
    var=10;

    ch_var='a';
    int_ptr = &var;

    char_ptr = &ch_var;

    printf("Value of variable var is = %d \n",*int_ptr);
    printf("Address of variable var is = %d \n",int_ptr);
    printf("Address of variable var is = %d \n",&var);
    printf("Address of pointer int_ptr is = %d \n",&int_ptr);
    printf("Size of pointer int_ptr is = %d \n",sizeof(int_ptr));

    printf("Value of variable ch_var is = %d \n",*char_ptr);
    printf("Address of variable ch_var is = %d \n",char_ptr);
    printf("Address of variable ch_var is = %d \n",&ch_var);
    printf("Address of pointer char_ptr is = %d \n",&char_ptr);
    printf("Size of pointer char_ptr is = %d \n",sizeof(char_ptr));
}
