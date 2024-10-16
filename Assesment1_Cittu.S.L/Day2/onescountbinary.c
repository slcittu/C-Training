/*
Program header 
1.Objective : Write a C code to check number of 1’s in the binary equivalent of a given number.
2.Revisions: Nil
3.Date & time of revision :02/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

int OnesCount(int number)
{
    int count=0;
    while(number)
    {
        count+=number&1;

        number>>=1;
    }
    return count;
}
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    int count=OnesCount(number);

    printf("Number of 1's in %d is: %d",number,count);
}
