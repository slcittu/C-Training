/*
Program header 
1.Objective : Input an Alphabet and get the ASCII value of hat alphabet and unpack the ASCII values and find the sum of the digits of the ASCII.
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>


int main()
{
    char ch;
    int ascii;
    printf("Enter a character:");
    scanf(" %c",&ch);
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
        ascii=ch;
        printf("ASCII Value of %c is %d", ch,ascii);
       int third=ascii/100;
       int second=(ascii/10)%10;
       int first=ascii%10;

       int sum= first+second+third;
       printf("The Sum of Digits of the ASCII value is: %d", sum);

  }
   else
  {
        printf("Enter a Valid input!!");
        return 1;
  }
    return 0;
}