/*
Program header 
1.Objective: Write code to perform bitwise shift operation using double pointers
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int var;

    printf("Enter the number to shift:");
    scanf("%d",&var);
    int *int_ptr=&var;
    int **ptp = &int_ptr;

    printf("Original value: %d\n",**ptp);

    **ptp=**ptp<<1;

    printf("Shifted Value: %d\n",**ptp);
    
    return 0;
}