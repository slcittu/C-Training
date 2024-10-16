/*
Program header 
1.Objective :Write a code to implement bitwise operations.
             1. Capture and check for valid operator.
             2. Mask higher 16 bits of results after bitwise operation. (&0x0000)
             3. Then print value in Decimal /Hex / octal Format.
             4. Continue on 'y'
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    char op,resume='y';
    int n1,n2,result;
    printf("BITWISE OPERATION\n");
    printf("-----------------\n");
    while(resume=='y' || resume=='Y')
    {
         printf("\nEnter two numbers:");
                scanf("%d",&n1);
                scanf("%d",&n2);
        printf("Enter the operation to be performed: AND('&'), OR('|'), XOR('^'):");
        scanf(" %c",&op);

            switch (op)
            {
            case '&':
               
                result=n1&n2;
                result=result&0x0000FFFF;
                printf("In Decimal %d & %d = %d",n1,n2,result);
                printf("In Hex %X & %X = %X",n1,n2,result);
                printf("In Octal %o & %o = %o",n1,n2,result);
                break;
            case '|':
              
                result=n1|n2;
                result=result&0x0000FFFF;
                printf("In Decimal %d | %d = %d",n1,n2,result);
                printf("In Hex %X | %X = %X",n1,n2,result);
                printf("In Octal %o | %o = %o",n1,n2,result);
                break;
            case '^':

                result=n1^n2;
                result=result&0x0000FFFF;
                printf("In Decimal %d ^ %d = %d",n1,n2,result);
                printf("In Hex %X ^ %X = %X",n1,n2,result);
                printf("In Octal %o ^ %o = %o",n1,n2,result);
                break;
            default:
                printf("INVALID OPERATOR!!\n");
                break;
            }
            printf("Do you want to continue.. (Y/N)");
            scanf(" %c",&resume);
    }
}