/*
Program header 
1.Objective : Implementing Nesting for loop inside switch statements
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    int v1,ch,shifts,i;
    printf("Enter Your Choice:\n 1.Shift Right\n 2.Shift Left:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter a number (Minimum 4 digits): ");
            scanf("%d",&v1);
            printf("\nEnter the no.of Shifts you want to perform: ");
            scanf("%d",&shifts);
            printf("Number before shift %d\n", v1);

            for(i=0;i<shifts;i++)
            {
                v1=v1>>1;
                printf("Number after %d shift is %d\n",i+1,v1);
            }
            break;

        case 2:
            printf("Enter a number : ");
            scanf("%d",&v1);
            printf("\nEnter the no.of Shifts you want to perform: ");
            scanf("%d",&shifts);
            printf("Number before shift %d\n", v1);

            for(i=0;i<shifts;i++)
            {
                v1=v1<<1;
                printf("Number after %d shift is %d\n",i+1,v1);
            }
            break;

    }
}