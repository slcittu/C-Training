/*
Program header 
1.Objective :Write a code for printing 10th power of a number and capture char 'Y' and 'y' to continue
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int num;
    char ch='Y';

    while (ch=='Y' ||ch =='y')
    {
        printf("Enter the number to get the 10th Power: ");
        scanf("%d",&num);
        printf("\n%d^10 = %d",num,pow(num,10));

        printf("\nEnter 'Y' or 'y' to continue:");
        scanf(" %c",&ch);
    }
    printf("\nProgram Terminated..");
    
}
