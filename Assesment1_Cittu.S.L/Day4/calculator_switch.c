/*
Program header 
1.Objective : Implementing Simple Calculator Using Switch
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{   
    int a=0,b=0,op=0;
    printf("\tCalculator\n");
    printf("\t---------------\n");
    printf("Enter Two Numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multipliction\n 4.Division\n Enter the Operation to be performed:");
    scanf("%d",&op);
     switch (op)
    {
        case 1:
        printf("%d + %d = %d",a,b,(a+b));        
        break;

        case 2:
        printf("%d - %d = %d",a,b,(a-b));
        break;

        case 3:
        printf("%d x %d = %d",a,b,(a*b));
        break;

        case 4:
        printf("%d / %d = %d",a,b,(a/b));
        break;
        default:
        printf("Invalid Input!!");
        break;
    }

    return 0;
}
