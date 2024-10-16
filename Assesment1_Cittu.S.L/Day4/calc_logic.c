/*
Program header 
1.Objective : Implementing Simple Calculator with logic gates  Using Switch
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{   
    int a=0,b=0,op=0,output;
    printf("\tCalculator\n");
    printf("\t----------\n");
    printf("Enter Two Numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" 1.AND\n 2.OR\n 3.XOR\n Enter the Operation to be performed:");
    scanf("%d",&op);
     switch (op)
    {
        case 1:
        {
            output = a && b;
            printf("Output of AND = %d\n",output);
        }
        break;
    case 2:
        {
            output = a || b;
            printf("Output of OR = %d\n",output);
        }
        break;
    case 3:
        {
            output = a ^ b;
            printf("Output of XOR = %d\n",output);
        }
        break;

        default:
        printf("Invalid Input!!");
        break;
    }

    return 0;
}
