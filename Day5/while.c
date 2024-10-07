/*
Program header 
1.Objective : Implementing While Loop
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

void main()
{
    int var1=0;
    //print value of var1 as long as its less than 10

    while (var1<10)
    {
        printf("value of var1 is = %d \t",var1);
        var1++;
    }
    printf("\nWhile loop terminated");
}