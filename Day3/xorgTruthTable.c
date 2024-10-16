/*
Program header 
1.Objective : Truth Table for XOR Gate
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    char a='F' , b='F';

    printf("\t\tTruth Table for XOR Gate\n");
    printf("-------------------------------------------------\n");
    printf("|\tIP1\t|\tIP2\t|\tOP\t|\n");
    printf("-------------------------------------------------\n");

    if(a=='F' && b=='F')
    {
        printf("|\t%c\t|\t%c\t|\t%c\t|\n",a,b,'F');
    }
    else if(a=='F' && b=='T')
    {
        printf("|\t%c\t|\t%c |\t%c\t|\n",a,b,'T');
    }
     else if(a=='T' && b=='F')
    {
        printf("|\t%c\t|\t%c |\t%c\t|\n",a,b,'T');
    }
     else if(a=='T' && b=='T')
    {
        printf("|\t%c\t|%c\t|\t%c\t|\n",a,b,'F');
    }
     printf("-------------------------------------------------\n");


    return 0;
}