/*
Program header 
1.Objective: Write C code to cperform bitwise operation between members of 2 structures and store result in third structure.
            - Define structure template
            - Capture 2 structure data
            - Perform bitwise operations(all 3)
            - Store result in another structure. 
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct bitwise_ip
{
    int n1;
};

struct bitwise_op
{
    int and,or,xor;
};

void main()
{
    struct bitwise_ip ip1,ip2;
    struct bitwise_op op;

    printf("Enter two Hex numbers to perform bitwise operations: ");
    scanf("%x",&ip1.n1);
    scanf("%x",&ip2.n1);

    op.and=ip1.n1& ip2.n1;
    op.or=ip1.n1|ip2.n1;
    op.xor=ip1.n1^ip2.n1;

    printf("Result of Bitwise operations: \n");
    printf("%X & %X = %X\n",ip1.n1,ip2.n1,op.and);
    printf("%X | %X = %X\n",ip1.n1,ip2.n1,op.or);
    printf("%X ^ %X = %X\n",ip1.n1,ip2.n1,op.xor);


}