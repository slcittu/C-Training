/*
Program header 
1.Objective :Write a code for following:
                1. Prompt user to enter positive number and check for it.
                2. Print cube of a entered number and continue to take user input.
                3. If user enters same number 2 times continously, then terminate the loop
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
void main()
{
    int number,number1;

    printf("Enter a positive number: ");
    scanf("%d",&number);

    while(1)
    {
        printf("Cube of %d = %d",number,(number*number*number));
        printf("\nEnter a positive number: ");
        scanf("%d",&number1);
        if(number1==number)
        {
            printf("Entered the same number as before.\n Terminating...");
            break;
        }
        number=number1;
    }
}

