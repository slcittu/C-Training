/*
Program header 
1.Objective: Define structure to check the sizes in different order of members to observe structure padding
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct my_struct
{
    int v1;
    char c2;
    int v2;
    char c1;
};

void main()
{
    struct my_struct st1;

    printf("%d",sizeof(st1));
}