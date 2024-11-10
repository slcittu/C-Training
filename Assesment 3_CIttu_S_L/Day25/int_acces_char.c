/*
Program header 
1.Objective: Create a character pointer
            -Assign 32 bit value to an int fields of union
            u1.v1=0x12345678
            Access int variable uisng char pointer
            if LB is accesses hen system is Little Endian else Big Endian
2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

//union definition
union u_name
{
    int v1;//4 bytes
    char c1;//1 byte(4 bytes)
};

//main function
void main()
{
    union u_name u1;
    char *ptr;

    u1.v1=0x12345678;//
    ptr=&u1.c1;
    printf("%x",*ptr);
}