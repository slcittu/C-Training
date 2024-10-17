/*
Program header 
1.Objective: Write C code to count no.of words in given string (strtok())
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
    int count=0;
    token=strtok(str,delimiter);

    while(token!=NULL)
    {
        printf("Tokenised string is: %s \n",token);
        count++;
        token=strtok(NULL,delimiter);
    }
    printf("\nNo.of words in the string is: %d",count);
}