/*
Program header 
1.Objective: Write C code to implement strchr-poins to the first character(ch) in the string.
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="Quest";
    char ch='Q';
    char *ch_ptr;
    ch_ptr=strchr(str,ch);

    printf(" %c  \n",*ch_ptr);
}