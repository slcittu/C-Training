/*
Program header 
1.Objective: Write a code 
            strcat =. string concatination
            Syntax: strcat(destination_string,source_string)
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="Quest Global";
    char str2[25]="I am working at :";
    strcat(str2,str1);
    printf("%s",str2);

}