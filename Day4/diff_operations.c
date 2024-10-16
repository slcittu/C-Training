/*
Program header 
1.Objective : Implementing Arithmetic,Logical, Bitwise Operations in a single program using nested switch cases inside for loop
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
void main()
{
    int ch,i,ch2,ch3,ch4,v1,v2;
    for(i=0;i<5;i++)
    {
        printf("1.Arithmetic\n");
    printf("2.Logical\n");
    printf("3.Bitwise");
    printf("enter the choice :\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    {
        printf("enter num1 : ");
        scanf("%d",&v1);
        printf("enter num2 : ");
        scanf("%d",&v2);
        printf("Enter a choice: ");
        printf("1.Addition\n");
        printf("2.Subtaction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        scanf("%d",&ch2);
            switch (ch2)
            {
                case 1:
                    printf("Result = %d\n",v1+v2);
                break;
            case 2:
                printf("Result = %d\n",v1-v2);
            break;
            case 3:
                printf("Result = %d\n",v1*v2);
            break;
            case 4:
                printf("Result = %d\n",v1*v2);
            break;
            default:
                printf("Default!");
            break;
        }
    

    }
        break;
    case 2:
    {
        printf("enter num1 : ");
        scanf("%d",&v1);
        printf("enter num2 : ");
        scanf("%d",&v2);
        printf("Enter a choice: ");
        printf("1.&&\n");
        printf("2.||\n");
        scanf("%d",&ch3);
            switch (ch3)
            {
                case 1:
                    printf("Result = %d\n",v1&&v2);
                break;
                case 2:
                    printf("Result = %d\n",v1||v2);
                break;
                default:
                    printf("Default!");
                break;
        }
    

    }
        break;
    case 3:
    {
        printf("enter num1 : ");
        scanf("%d",&v1);
        printf("enter num2 : ");
        scanf("%d",&v2);
        printf("Enter a choice: ");
        printf("1.&\n");
        printf("2.|\n");
        printf("3.^\n");
        scanf("%d",&ch4);
            switch (ch4)
            {
                case 1:
                    printf("Result = %d\n",v1&v2);
                break;
            case 2:
                printf("Result = %d\n",v1|v2);
            break;
            case 3:
                printf("Result = %d\n",v1^v2);
            break;
            default:
                printf("Default!");
            break;
        }
    

    }
    
    default:
    printf("Default ");
        break;
    }
    }
}