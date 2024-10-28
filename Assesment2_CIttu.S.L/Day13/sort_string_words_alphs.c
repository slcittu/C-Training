/*
Program header 
1.Objective: Write a code to sort the words in a string and also alphabets in each word
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
#include <string.h>

void sortChars(char* word) {
    int len=strlen(word),index1,index2;
    char temp;
    for(index1=0;index1<len-1;index1++) 
    {
        for(index2=index1+1;index2<len;index2++) 
        {
            if(word[index1]>word[index2]) 
            {
                temp=word[index1];
                word[index1]=word[index2];
                word[index2]=temp;
            }
        }
    }
}


void sortWords(char* str) 
{

    char words[100][50],temp[50];
    int wordCount=0;
    int index1=0,index2=0;

    while (str[index1]!='\0') 
    {
        if(str[index1]!=' ') 
        {
            words[wordCount][index2++]=str[index1];
        } 
        else if(index2>0) 
        {  
            words[wordCount][index2]='\0';
            wordCount++;
            index2=0;
        }
        index1++;
    }
    if (index2>0) 
    { 
        words[wordCount][index2]='\0';
        wordCount++;
    }
    for(index1=0;index1<wordCount;index1++) 
    {
        sortChars(words[index1]);
    }

    for(index1=0;index1<wordCount-1;index1++) 
    {
        for(index2=index1+1;index2<wordCount;index2++) 
        {
            if (strcmp(words[index1], words[index2])>0) 
            {
                strcpy(temp,words[index1]);
                strcpy(words[index1],words[index2]);
                strcpy(words[index2],temp);
            }
        }
    }
    for (index1=0;index1<wordCount;index1++) 
    {
        printf("%s ",words[index1]);
    }
}

void main() 
{
    char str[200];
    printf("Enter a string: ");
    gets(str);

    sortWords(str);

}
