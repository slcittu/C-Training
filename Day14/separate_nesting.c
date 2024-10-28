/*
Program header 
1.Objective: Separate Nesting
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
    }my_str1;
    char c1;
};

struct str2
{
    int vr1;
    struct my_struct my_st1;
}st1;

void main()
{
    st1.my_st1.v1=10;
    st1.my_st1.my_str1.str2_v1=20;
    printf("%d \n",st1.my_st1.v1);
     printf("%d \n",st1.my_st1.my_str1.str2_v1);
}