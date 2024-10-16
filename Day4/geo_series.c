/*
Program header 
1.Objective : Implementation of Geometric Series
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
#include <math.h>

void main()
{
    int a=1,r=3,n=10,term,sum=0;

    for (int i = 0; i < n; i++) {
        term= a * pow(r, i); 
        printf(" %d",term);
        sum+=term;
    }
    printf("\nSum of the Series is : %d",sum);
}