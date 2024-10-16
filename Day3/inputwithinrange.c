/*
Program header 
1.Objective : Created a code to input a number between a range using logical oprators
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

void main()
{
    int number;

    printf("Enter a number between 2 & 25: ");
    scanf("%d",&number);

    if(!(number>=2 && number<=25))
    {
        printf("Invalid Input!!");
    }
    else
    {
        printf("The Number is: %d",number);
    }
}