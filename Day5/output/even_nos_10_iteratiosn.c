/*
Program header 
1.Objective : Implementing While Loop to print even nos between 20 to 50 for 10 iterations
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

void main()
{
    int iterations=0;
    printf("The numbers are: ");
    
    while (iterations<10)
    {
        printf("Iteration %d : ",iterations+1);
        int no=20;
        while(no<=50)
        {
            if(no%2==0)
            {
                printf(" %d\t",no);
            }
            no++;
        }
        printf("\n");
        iterations++;
    }
}
   


