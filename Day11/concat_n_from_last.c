/*
Program header 
1.Objective: Write C code to concatenate 'n' number of characters from last.
            source_String: Quest
            dest_string: Trivandrum
            n=> user input
            n-2
            then dest_string: Trivandrumts
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void concatenateLast(char *dest,char * source,int n);

void main()
{
    char source[]="Quest";
    char dest[50]="Trivandrum";
    int n;

    printf("Enter the no.of characters to concatenate from the end of the source string: ");
    scanf("%d",&n);

    concatenateLast(dest,source,n);

    printf("The concatenated string: %s",dest);
}

void concatenateLast(char *dest,char * source,int n)
{
    int dest_length=strlen(dest);
    int source_length=strlen(source);

    char *destPtr=dest+dest_length;
    char *sourcePtr=source+source_length-1;

    while(n!=0)
    {
        *destPtr=*sourcePtr;
        destPtr++;
        sourcePtr--;
        n--;
    }

    *destPtr='\0';
}

