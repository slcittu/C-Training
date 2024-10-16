/*
Program header 
1.Objective : Implementing Traffic Light Using Switch
 2.Revisions: Nil
3.Date & time of revision :04/10/24
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
        switch (ch)
        {
        case 'R':
            printf("STOP!!");
            break;
        case 'Y' :
            printf("GET READY !!");
            break;
        case 'G' :
            printf("YOU CAN GO NOW!!");
            break;
        case 'r':
            printf("STOP!!");
            break;
        case 'y':
            printf("GET READY !!");
            break;
        case 'g':
            printf("YOU CAN GO NOW!!");
            break;
        default:
            printf("INVALID INPUT!!");
            break;

        }

    }
    else
    {
        printf("Enter a Valid Character!!");
    }

    return 0;

}