/*
Program header 
1.Objective: Write a code to find the length of string
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
#include<string.h>



void main()
{
    char str[]= "String";
    int length=0;
    length=strlen(str);

    printf("Length of the string is %d. ",length);
   // printf("%c",*str);// Get the first character
}