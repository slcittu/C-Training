/*
Program header 
1.Objective: Write a code to find the length of string without using standard library functions
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>
void main()
{
    char str[]= "a b";
    int length=0,i=0;

    while(str[i++]!='\0')
    {
        length++;
    }
    printf("Length of the string is %d. ",length);
}