/*
Program header 
1.Objective : Implementing Full Pyramid Using For loop
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    int lc,lc2,space;
    for (lc=1;lc<10;lc++)
    {
        for (space=1;space<=10-lc;space++)
        {
            printf(" ");

        }
        for(lc2=1;lc2<=lc;lc2++)
        {
            printf("%d ",lc);
            
        }
        printf("\n");
    }

}