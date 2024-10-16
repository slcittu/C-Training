/*
Program header 
1.Objective: Using pointers swap 2 numbers
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int var1,var2;
    int *int_ptr1,*int_ptr2,temp;

    printf("Enter two numbers:");
    scanf("%d %d",&var1,&var2);

    int_ptr1=&var1;
    int_ptr2=&var2;
    printf("Value 1= %d \n Value 2 = %d\n",*int_ptr1,*int_ptr2);

    temp=*int_ptr1;
    *int_ptr1=*int_ptr2;
    *int_ptr2=temp;

    printf("After swap\n Value 1 = %d \n Value 2 = %d\n",*int_ptr1,*int_ptr2);

    return 0;
}