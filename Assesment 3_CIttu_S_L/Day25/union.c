/*
Program header 
1.Objective: Write code to implement union
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

//union definition
union u_name
{
    int v1;
    char ch;
};

void main()
{
    union u_name u1;
    u1.v1=10;
    printf("%d \n",u1.v1);
    u1.ch='a';
    printf("%d \n",u1.v1);
    u1.v1=5;
    printf("%c \n",u1.ch);

}