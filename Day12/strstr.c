/*
Program header 
1.Objective: Write C code to implemenet strstr()
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="Trivandrum is now Thiruvananthapuram";
    char sub_str[10];
    char *s_ptr;
    printf("Enter substring to be searched: ");
    gets(sub_str);

    s_ptr=strstr(str,sub_str);

    if(s_ptr!=NULL)
    {
        printf("%s \n",s_ptr);
        puts(s_ptr);
    }
    else
    {
        printf("Substring not found!");
    }

}