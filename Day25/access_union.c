/*
Program header 
1.Objective: Write code to access union elements using pointer.
            - Single pointer is used to access all fields of union.
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

//union definition
union u_name
{
    int v1;
    char c1;
};


//main function
// void main()
// {
//     union u_name u1, *ptr;
//     ptr=&u1;

//     ptr->v1=45;
//     printf("Integer v1: %d\n",ptr->v1);
//     printf("Character c1: %c\n",ptr->c1);

//     ptr->c1='C';
//     printf("After assigning value to character.\n");
//     printf("Integer v1: %d\n",ptr->v1);
//     printf("Character c1: %c\n",ptr->c1);


// }

void main()
{
    union u_name u1;
    int *ptr;
    u1.v1=45;
     ptr=&u1.v1;
    printf("Integer v1: %d\n",*ptr);

    u1.c1='C';
    ptr=&u1.c1;
    printf("Character c1: %c\n",*ptr);
}