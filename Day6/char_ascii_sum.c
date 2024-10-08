/*
Program header 
1.Objective :Scan atleast 10 characters from the user and display the sum of ASCII values of the characters
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
int main()
{
    char arr[10];
    int sum;
    int first;
    for ( first = 0; first < 10; first++)
    {
        printf("Enter %d character to the array: ",first+1);
        scanf(" %c",&arr[first]);
        sum+=(int)arr[first];
    }
    printf("Sum of ACII Value is %d",sum);
    return 0;
}