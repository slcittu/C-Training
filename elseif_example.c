/*
Program header 
1.Objective : Implement a Traffic Light system using Else if
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Colour for the Traffic Light : ");
    scanf(" %c",&ch);

    if(ch>='a'&&ch<='z' || ch>='A' && ch<='Z')
    {
        if(ch=='g' || ch=='G')
        {
            printf("You Can GO Now!!");
        }
        else if(ch=='y' || ch=='Y')
        {
            printf("Get Ready!!");
        }
        else if(ch=='r' || ch=='R')
        {
            printf("STOP!!");
        }
        else{
            printf("This Traffic light colour not exist!!");
        }
    }
    else
    {
        printf("Invalid Input!!");
    }
}

