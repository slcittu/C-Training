/*
Program header 
1.Objective : Logical operation using do while loop
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>

int main()
{
    int val=-1;
    char ch;
    

    do
    {
        printf("Enter the Value:");
        scanf("%d",&val);
        
        if(val>0 && val<10)
        {
            printf("\nThe value is in between 0 and 10\n");
        }
        else
        {
             printf("\nThe value is not in between 0 and 10\n");
        }

        if(val>0 || val<10)
        {
             printf("\nThe value is in between 0 or 10\n");
        }
        else
        {
             printf("\nThe value is not in between 0 and 10\n");
        }
        printf("Press'Y' to continue.");
        scanf(" %c",&ch);
    } while (ch=='Y' || ch=='y');
    return 0; 
}