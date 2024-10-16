/*
Program header 
1.Objective: Write a code  to mplement string concatenation withput using standard library functions
            strcat =. string concatination
            Syntax: strcat(destination_string,source_string)
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

void stringConcatenate(char dest[],char source[]);

void main()
{
    char str1[]="Quest Global";
    char str2[25]="I am working at : ";

    stringConcatenate(str2,str1);

    printf("%s",str2);
}

void stringConcatenate(char dest[],char source[])
{
    int index1=0,index2=0;
    while(dest[index1]!='\0')
    {
        index1++;
    }

    while(source[index2]!='\0')
    {
        dest[index1++]=source[index2++];
    }

    dest[index1]='\0';
}