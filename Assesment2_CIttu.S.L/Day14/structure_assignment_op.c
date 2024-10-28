/*
Program header 
1.Objective: Assignment operator initialization
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>


struct my_struct
{
    int v1;
    char c1;
    int v2; 
    char c2; 
};

void main()
{
    struct my_struct st;

    st.v1=100;      //Assignment operator initialization
    st.v2=50;
    st.c1='c';
    st.c2='i';
    printf("%d %d",st.v1,st.v2);
}
