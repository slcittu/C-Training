/*
Program header 
1.Objective: strcpy: String copy
             source_string: Quest
             dest_string: Bosch
             strcpy(dest_string,source_string);
             dest_string: Quest
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

    strcpy(dest,src);
    printf("Destination String after copying : %s",dest);
}