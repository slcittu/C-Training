/*
Program header 
1.Objective : Implementing Half Pyramid Using For loop
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int lc,lc2;

    for (lc = 0; lc < 10 ; lc++)
    {
        printf(" ");
        for (lc2 = 0; lc2 < lc; lc2++)
        {
            printf("%d",lc);
        }
        printf("\n");
        
    }
    
    return 0;
}