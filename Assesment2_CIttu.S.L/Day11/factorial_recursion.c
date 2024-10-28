/*
Program header 
1.Objective: Write a code to calculate factorial of a given number using recursion
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int fact(int n);

void main()
{
    int factorial=1,n;

    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);
     if(n<0)
    {
        printf("INVALID INPUT!!");
        return 0;
    }

    factorial=fact(n);
    printf("\nFactorial of %d is %d. ",n,factorial);
    
}

int fact(int n)
{
   
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }

}