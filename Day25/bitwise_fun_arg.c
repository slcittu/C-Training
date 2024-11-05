/*
Program header 
1.Objective: Write code to pass functions as argument for bitwise operations.

2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

//function prototyping
void bitwise_AND(int,int);
void bitwise_OR(int,int);
void bitwise_XOR(int,int);
void bitwise_NOT(int,int);


void fpt(void (*fun_ptr)(),int v1,int v2)
{
    fun_ptr(v1,v2);
}

//main function
void main()
{
    int choice;

    unsigned int v1,v2;
    printf("Enter first hexadecimal value(Eg:0xA): ");
    scanf("%x",&v1);
    printf("Enter second hexadecimal value(Eg:0xB): ");
    scanf("%x",&v2);
    printf("Enter your choice:\n1:Bitwise AND\n2:Bitwise OR\n3:Bitwise XOR\n4:Bitwise NOT: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: fpt(bitwise_AND,v1,v2);
                break;
        case 2: fpt(bitwise_OR,v1,v2);
                break;
        case 3: fpt(bitwise_XOR,v1,v2);
                break;
        case 4: fpt(bitwise_NOT,v1,v2);
                break;
        default: printf("Invalid Choice!!");

    }
}


void bitwise_AND(int v1,int v2)
{
    printf("%x & %x: 0x%x",v1,v2,v1&v2);
}
void bitwise_OR(int v1,int v2)
{
    printf("%x | %x: 0x%x",v1,v2,v1|v2);
}
void bitwise_XOR(int v1,int v2)
{
    printf("%x ^ %x: 0x%x",v1,v2,v1^v2);
}
void bitwise_NOT(int v1,int v2)
{
    printf("~%x: 0x%x",v1,~v1&0xffff);
}

