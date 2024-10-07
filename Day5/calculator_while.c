/*
Program header 
1.Objective :Write a code to implement simple calculator
            user should have choice if wants to continue, then capture operation to be performed
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

void main()
{
    int num,n1,n2;
    float ans=0.0;
    char op,continue_calc;
    printf("SIMPLE CALCULATOR\n");
    printf("-----------------");
    printf("\nDO you want to continue,Enter (Y/N)");
    scanf(" %c",&continue_calc);
    while (continue_calc=='Y' || continue_calc=='y')
    {
        printf("Enter two numbers :\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        printf("Enter the Operation to be performed\n ADD('A')\n SUBTRACT ('S')\n MULTIPLY('M) \n DIVIDE ('D)\n MODULUS ('O): ");
        scanf(" %c",&op);

        if(op=='A'|| op=='a')
        {
            ans=n1+n2;
            printf("%d + %d = %.2f",n1,n2,ans);
        }
        else if(op=='S'||op=='s')
        {
            ans=n1-n2;
            printf("%d - %d = %.2f",n1,n2,ans);
        }
         else if(op=='M'|| op=='m')
        {
            ans=n1*n2;
            printf("%d X %d = %.2f",n1,n2,ans);
        }
         else if(op=='D'|| op=='d')
        {
            ans=(float)n1/n2;
            printf("%d / %d = %.2f",n1,n2,ans);
        }
         else if(op=='O' || op=='o')
        {
            ans=n1%n2;
            printf("%d % %d = %d",n1,n2,ans);
        }
        else
        {
            printf("INVALID OPERATOR!!");
            break;
        }
    }
    
}