/*
Program header 
1.Objective: Write a code
            strcmp: Used to compare 2 strings
            return an interger ... ZERO or +ve or -ve
            - ZERO if strings are equal (s1=s2)
            - else non-ZERO
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="abC";
    char str2[]="abc";

    int var=0;
    var=strcmp(str1,str2);
    
    printf("%d",var);

}