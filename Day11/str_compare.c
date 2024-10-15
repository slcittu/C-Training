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

void main()
{
    char str1[]="String1";
    char str2[]="String2";

    int var=0,index;
    while(str1[index]!='\0' && str2[index]!='\0')
    {
        if(str1[index]!=str2[index])
        {
            if(str1[index]>str2[index])
            {
                var=1;
            }
            else
            {
                var=-1;
            }
            break;
        }
        index++;
    }
    if(var==0 &&(str1[index]!='\0'||str2[index]!='\0'))
    {
        if(str1[index]!='\0')
        {
            var=1;
        }
        else{
            var=-1;
        }
    }
    printf("%d",var);

}