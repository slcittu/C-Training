/*
Program header 
1.Objective: Write a code to represent colors as enum values and print their values using loop.
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

enum colors{violet=1,indigo=3,blue,green=8,yellow,orange=5,red};

void main()
{
    int lc;
    for(lc=violet;lc<=red;lc++)
    {
        printf("%d \t",lc);
    }
}
