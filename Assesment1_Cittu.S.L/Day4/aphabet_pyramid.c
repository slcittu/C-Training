/*
Program header 
1.Objective : Implementing Alphabetic Pattern 
                A
                B C
                D E F
                G H I J
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int lc,lc2;
    char ch='A';

    for (lc = 0; lc < 4 ; lc++)
    {
        printf(" ");
        for (lc2 = 0; lc2 < lc; lc2++)
        {
            printf(" %c",ch++);
        }
        printf("\n");
        
    }
}