/*
Program header 
1.Objective: Embedded Nesting
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
struct my_struct
{
    int v1;
    struct my_str2
    {
        int str2_v1;
        char str2_c1;
    }st2,st3;
    char c1; 
};

void main()
{
    struct my_struct st1 ={.v1=10,.c1='c'}; // designated intializer list(Initialization while declaration)

    st1.st2.str2_c1='i';
    st1.st2.str2_v1=25;
    st1.st3.str2_v1=5;
    st1.st3.str2_c1='t';

    printf("%d %d %d\n",st1.v1,st1.st2.str2_v1,st1.st3.str2_v1);
    printf("%c %c %c\n",st1.c1,st1.st2.str2_c1,st1.st3.str2_c1);
}