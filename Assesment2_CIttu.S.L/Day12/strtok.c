/*
Program header 
1.Objective: Write C code to implemenet strtok()
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="Trivandrum is now Thiruvananthapuram";
    char delimiter[]=" ";
    char *token;
    token=strtok(str,delimiter);

    while(token!=NULL)
    {
        printf("Tokenised shtring is: %s \n",token);
        token=strtok(NULL,delimiter);
    }
}