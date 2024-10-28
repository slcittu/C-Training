/*
Program header 
1.Objective: Write C code to check for atleast 1 integer and one of the following character in user string.
                special character: _ , &, #
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int validateString(char *str);

void main()
{
    char string[25];

    printf("Enter a password:");
    scanf("%s",string);

    if(validateString(string))
    {
        printf("\nPerfect!!\nThe password contains atleast 1 integer,_, &, #.");
    }
    else
    {

        printf("\nThe password doesn't match the requirements.");
    }
}

int validateString(char *str)
{
    int integerFlag=0,specialFlag=0,alphabetCount=0,length=0;

    while(*str!='\0')
    {
        length++;
        if(*str>='0' && *str<= '9')
        {
            integerFlag=1;
        }

        if(*str=='-'|| *str=='&' || *str=='#')
        {
            specialFlag=1;
        }

        if((*str>='a'&& *str<='z')|| (*str>='A'&& *str<='Z'))
        {
            alphabetCount++;
        }
        str++;
    }

    if(length>=8 && integerFlag&&specialFlag && alphabetCount>=4)
    {
     
        return 1;
    }
    else
    {
        if(!(length>=8))
        {
            printf("\nPassword must be atleast 8 characters!!");
        }
        if(!(alphabetCount>=4))
        {
             printf("\nPassword must contain atleast 4 alphabets!!");
        }
        if(!(integerFlag=1))
        {
            printf("\nPassword must contain atleast 1 integer!!"); 
        }
        if(!(specialFlag=1))
        {
            printf("\nPassword must contain atleast 1 special character!!"); 
        }
        return 0;
    }
}