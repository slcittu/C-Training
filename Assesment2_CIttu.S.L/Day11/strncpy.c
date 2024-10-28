/*
Program header 
1.Objective: strncpy: Copy first 'n' number of characters
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#include<string.h>

void main()
{
     char src[]="Quest";
    char dest[10]="Bosch";

    strncpy(dest,src,2);
    printf("Destination String after copying : %s",dest);
}