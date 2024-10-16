/*
Program header 
1.Objective: Perform Arithmetic operations using pointers.
            -Use switch case
            -var1 & var2,result
            -int_ptr1 =>car1, int_ptr2=> var2
            - result=*int_ptr1 + *int_ptr2
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int var1,var2,result;
    int *int_ptr1,*int_ptr2;
    char operator,ch='y';
    
    while(ch=='Y' || ch=='y')
    {
        printf("Enter 2 numbers: ");
        scanf("%d %d",&var1,&var2);

        int_ptr1 = &var1;
        int_ptr2 = &var2;

        printf("Enter the operation you want to perform:\n 1. ADD\n 2. SUBTRACT\n 3. MULTIPLY\n 4. DIVIDE\n");
        scanf(" %c",&operator);

        switch (operator)
        {
        case '1':
            result = *int_ptr1 + *int_ptr2;
            printf("Result : %d + %d = %d ",*int_ptr1,*int_ptr2,result);
            break;
        case '2':
            result = *int_ptr1 - *int_ptr2;
            printf("Result : %d - %d = %d ",*int_ptr1,*int_ptr2,result);
            break;
        case '3':
            result = *int_ptr1 * *int_ptr2;
            printf("Result : %d x %d = %d ",*int_ptr1,*int_ptr2,result);
            break;
        case '4':
            if(*int_ptr2!=0)
            {
                 result = *int_ptr1 / *int_ptr2;
            printf("Result : %d / %d = %d ",*int_ptr1,*int_ptr2,result);
            }
            else
            {
                printf("Error!! Divison by ZERO is not allowed.\n");
            }
           
            break;
        default:
            printf("INVALID OPERATOR!!");
            break;
        }

        printf("\nDo you want to continue?\n (Y/N)");
        scanf(" %c",&ch);
    }
    return 0;
}