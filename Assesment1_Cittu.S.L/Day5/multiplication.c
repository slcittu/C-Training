/*
Program header 
1.Objective :Write a code to print multiplication table:
                1. Capture the number from user.
                2. Capture number of iterations for multiplication
                3. Print the table for entered number.
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
void main()
{
    int number,iterations,steps=1;

    printf("Enter the Number to get the muliplication table: ");
    scanf("%d",&number);

    printf("\nEnter the number of muliplications needed: ");
    scanf("%d",&iterations);
    printf("\nMULTIPLICATION TABLE OF %d ",number);
    printf("\n---------------------------\n");
    while (steps<=iterations)
    {
       printf("%d X %d = %d\n",steps,number,(steps*number));
       steps++;
    }
    
}