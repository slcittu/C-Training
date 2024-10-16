/*
Program header 
1.Objective: Write C code to search for character in string and print its position and address.
            string: "Quest is quite place to work"
            search char= 'e'
            result:'e'
            Positition: 2
            Address: Base + 3 bytes offset
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void main()
{
    
    char str[]="Quest is quite place to work";
    char ch='u';
    char *ch_ptr;
    int position=-1;
    ch_ptr=strchr(str,ch);

     if(ch_ptr!=NULL)
    {
        position=ch_ptr-str;
        printf("\nResult: '%c'",*ch_ptr);
        printf("\nPosition: %d",position);
        printf("\nAddress: %x",(str+position));
    }
    else
    {
        printf("Character '%'c not part of string.",ch);
    }
}