/*
Program header 
1.Objective : Write a code, prompting user to enter number repeatedly till ZERO is entered.
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

void main()
{
    int number;
    printf("Enter a number: (Enter ) to exit:");
    scanf("%d",&number);

    while(number!=0)
    {
        printf("The number is %d\n",number);
        scanf("%d",&number);
      
        printf("Enter a number: (Enter ) to exit:");
    }
    printf("Entered 0.Program Terminated!!");
}