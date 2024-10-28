/*
Program header 
1.Objective: Modify the above code to count the no.of characters to be concatenated.
            strncat(dest,source,no_of_chars)
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="Quest Global";
    char str2[25]="I am working at :";
    strncat(str2,str1,5);
    printf("%s",str2);

}