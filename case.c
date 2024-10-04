/*
Program header 
1.Objective : Implementing Switch case
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int var=1;

    switch (var)
    {
        case 1:
        printf("Case 1")        
        break;

        case 2:
        printf("Case 2");
        break;

        case 3:
        printf("Case 3");
        break;
        default:
        printf("Invalid!!");
        break;
    }
}