/*
Program header 
1.Objective: Write C code to find position and address of first vowel in string.
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void main()
{
    
    char str[]="wrkcccI";
    char ch[]="aeiouAEIOU";
    char *ch_ptr;

    ch_ptr=strpbrk(str,ch);

    if(ch_ptr!=NULL)
    {
        printf("The first vowel in the string is %c \n Position:%d \n Address: %x",*ch_ptr,(ch_ptr-str),ch_ptr);
    }
    else
    {
        printf("No vowels found in the string!!");
    }
}