/*
Program header 
1.Objective: Write a code to find your name in list.
strcmp: char list[10][10]={Aadith,
                           Anush,
                           Sona,
                           Abhiramu,
                           Cittu,
                           Abin,
                           Devadath,
                           Devika,
                           Gowri,
                           Lisha}
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char list[10][10]={"Aadith",
                    "Anush",
                    "Sona",
                    "Abhiramu",
                    "Cittu",
                    "Abin",
                    "Devadath",
                    "Devika",
                    "Gowri",
                    "Lisha"};
    char name[10];
    int flag=0,index=0;

    printf("Enter the name to search: ");
    scanf("%s",name);

    for(index=0;index<10;index++)
    {
        if(strcmp(list[index],name)==0)
        {
            printf("Name %s found at position %d. ",name,index+1);
            flag=1;
            break;
        }
    }

    if(!flag)
    {
        printf("Name %s not found!!!",name);
    }

    
}


