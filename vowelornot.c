/*
Program header 
1.Objective : Write a code to check iuf character entered by user is a Vowel.
2.Revisions: Nil
3.Date & time of revision :02/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
        if(ch=='A'||ch=='E'|| ch=='I'|| ch=='O' || ch=='U'|| ch =='a'|| ch=='e'|| ch=='i' ||ch=='o'||ch=='u')
        {
            printf("The character you have entered is a Vowel: %c", ch);
        }
        else
        {
            printf("The character you have entered is not a Vowel: %c", ch);

        }
  } 
}