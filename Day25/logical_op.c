/*
Program header 
1.Objective: Write code to implement menu based logical operations using array of function pointers.
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

//function prototyping
void logical_AND(int,int);
void logical_OR(int,int);
void logical_NOT(int,int);

//main function
void main()
{
    void (*fun_ptr_arr[])(int,int)={logical_AND,logical_OR,logical_NOT};
    int choice;
    unsigned int v1,v2;
    printf("Enter first hexadecimal value(Eg:0xA): ");
    scanf("%x",&v1);
    printf("Enter second hexadecimal value(Eg:0xB): ");
    scanf("%x",&v2);

    printf("Enter your choice:\n1:LOGICAL AND\n2:LOGICAL OR\n3:LOGICAL NOT: ");
    scanf("%d",&choice);
    (fun_ptr_arr[choice-1])(v1,v2);
}

void logical_AND(int v1,int v2)
{
    printf("0x%x && 0x%x : %d",v1,v2,v1&&v2);
}
void logical_OR(int v1,int v2)
{
     printf("0x%x || 0x%x : %d",v1,v2,v1||v2);
}

void logical_NOT(int v1,int v2)
{
     printf("!0x%x: %d",v1,!v1);
}

