/*
Program header 
1.Objective: Initializer list
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
    struct my_struct st2 ={.v1=10,.v2=12}; // designated intializer list
    printf("%d %d",st2.v1,st2.v2);
}
