/*
Program header 
1.Objective: Write C code to copy 'n' numbers in reverse order

2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void copyLast(char *dest,char *source,int n);

void main()
{
    char source[]="Quest";
    char dest[50]="Bosch";
    int n;

    printf("Enter the no.of characters to copyfrom the end of the source string: ");
    scanf("%d",&n);

    copyLast(dest,source,n);

    printf("The copied string: %s",dest);
}

void copyLast(char *dest,char *source,int n)
{
    
    int source_length=strlen(source);
    int dest_length=strlen(dest);

    char *destPtr=dest;
    char *sourcePtr=source+source_length-1;

    while(n!=0)
    {
        *destPtr=*sourcePtr;
        destPtr++;
        sourcePtr--;
        n--;
    }
}
