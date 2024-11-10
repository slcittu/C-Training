/*
Program header 
1.Objective: Write code to print sizes of following unions
            - Union with int and char
            - Union with only char
            - Union with int array[5]
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

union character
{
    char ch;
};

union integer
{
    int array[5];
};

void main()
{
    union u_name u1;
    union character u2;
    union integer u3;

    printf(" Size of union with int and char: %d \n",sizeof(u1));
    printf(" Size of union with char: %d \n",sizeof(u2));
    printf(" Size of union with int array[5]: %d \n",sizeof(u3));
}
