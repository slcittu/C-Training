/*
Program header 
1.Objective : Universal  Gates Implementation
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int v1=0x56, v2=0xAA;// v1=0101 v2=1010
    int and= v1&v2;
    int nand=~and;
    int or =v1|v2;
    int nor=~or;
    int xor= v1^v2;


    printf("Results:=\n AND: %X\n  OR: %X \n XOR: %X\n NAND: %X\n  NOR: %X \n",and, or, xor,nand,nor);
}