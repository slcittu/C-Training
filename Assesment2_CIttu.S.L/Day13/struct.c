/*
Program header 
1.Objective: Write C code to define structure and access its members using structure variables.
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

struct my_struct
{
    int v1;
    char c1;
};

void main()
{
    struct my_struct st1;

    printf("Enter an integer: ");
    scanf("%d",&st1.v1);
    printf("Enter a character: ");
    scanf(" %c",&st1.c1);

    printf("%d\n%c",st1.v1,st1.c1);
}