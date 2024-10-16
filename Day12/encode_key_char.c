/*
Program header 
1.Objective: Write C code to encode key character with '*' at first and last position and rest encode with '$'.
            String: "........"
            Key char:user defined
            First & last occurence => *
            Rest => $
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

void encoder(char *str,char key);
void main()
{
    char str[50];
    char key;

    printf("Enter the string: ");
    gets(str);  

    printf("Enter the key character: ");
    scanf( " %c",&key);

    encoder(str,key);
    printf("Encoded string: %s",str);
}

void encoder(char *str,char key)
{
    char *first,*last;
    char *index;

    first=strchr(str,key);
    last=strrchr(str,key);

    if(first==NULL)
    {
        printf("Key character not found in the string.\n");
        return 0;
    }

    for(index=first+1;index<last;index++)
    {
        if(*index==key)
        {
            *index='$';
        }
    }
    *first='*';
    *last='*';
}