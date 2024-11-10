/*
Program header 
1.Objective: Write a code to implement enumerations
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

enum month{jan=1,feb,march,apr,may,jun};

void main()
{
    int lc;
    for(lc=jan;lc<=jun;lc++)
    {
        printf("%d \t",lc);
    }
}
