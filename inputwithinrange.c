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