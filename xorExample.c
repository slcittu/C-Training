/*
Program header 
1.Objective : Write a code to input 2 vowels  and ceck if both the caracters are same , if same print invalid.(Small letter or capital letter)
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    char c1,c2;
    printf("Enter First Vowel: ");
    scanf(" %c",&c1);

    printf("Enter the Second Vowel: ");
    scanf(" %c",&c2);

    if ((c1 == 'A' || c1 == 'E' || c1 == 'I' || c1 == 'O' || c1 == 'U' || c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u') 
         &&(c2 == 'A' || c2 == 'E' || c2 == 'I' || c2 == 'O' || c2 == 'U' || c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u'))
    {
             if (c1 ^^ c2)
        {
            printf("Invalid Input!! Both caracters are the same.\n");
        }
        else
        {
            printf("Valid Input. Both caracters are vowels but different.\n");
        }
    }
    else
    {
        printf("Invalid input: Both caracters must be vowels.\n");
    }

    return 0;

}