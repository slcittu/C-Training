/*
Program header 
1.Objective: Write C code to convert string into CSV format.
            CSV-Comma Separated Values.
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
    char buffer[100]="";
    
    token=strtok(str,delimiter);

    while(token!=NULL)
    {
        strcat(buffer,token);
        strcat(buffer,",");
        token=strtok(NULL,delimiter);
       
    }
    buffer[strlen(buffer)-1]='\0';
    printf("\nThe CSV file content: %s",buffer);
}