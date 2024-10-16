/*
Program header 
1.Objective: strcpy: String copy
             source_string: Quest
             dest_string: Bosch
             strcpy(dest_string,source_string);
             dest_string: Quest
             implement using pointers, without using standard library functions.
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#include<string.h>

void stringCopy(char *dest,char * src);
void main()
{
    char src[]="Quest";
    char dest[10]="Bosch";

    stringCopy(dest,src);
    printf("Destination String after copying : %s",dest);
}

void stringCopy(char *dest,char * src)
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }

    *dest='\0';
}
