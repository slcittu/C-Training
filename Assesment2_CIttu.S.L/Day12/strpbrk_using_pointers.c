/*
Program header 
1.Objective: Write C code to implement strpbrk using pointers and count how many times each character of key_str are present in Target_string
            Target string: "Quest is a quite place to work"
            key_str: "user_input"
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void strpbrk_nonlib(char * target,char *key_str);

void main()
{
    char target[]="Quest is a quite place to work";
    char key_str[20];


    printf("Enter the key string to check:");
    gets(key_str);

    strpbrk_nonlib(target,key_str);
}

void strpbrk_nonlib(char *target,char *key_str)
{
    int count[122]={0};

    char *target_ptr,*key_ptr;

    for(key_ptr=key_str;*key_ptr!='\0';key_ptr++)
    {
        for(target_ptr=target;*target_ptr!='\0';target_ptr++)
        {
            if(*target_ptr==*key_ptr)
            {
                count[(int)*key_ptr]++;
            }
        }
    }
    for(key_ptr=key_str;*key_ptr!='\0';key_ptr++)
    {
        printf("Character '%c' - Count : %d\n",*key_ptr,count[(int)*key_ptr]);
    }
}