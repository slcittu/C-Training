/*
Program header 
1.Objective : Universal  Gates Implementation
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

void main()
{
    int v1=0x55,v2=0xAA;//v1=0101 v2=1010
    int res,res1,res2;

    //OR USING NAND
    res = v1 & v1;//0101 & 0101=0101
    //NOT
    res = ~res;//1010
    res1 = v2 & v2; // 1010 & 1010=1010
    res1 = ~res1;// 0101
    res2 = res & res1; //1010 & 0101=0000
    res2 = ~res2;// 1111
    printf("result = %x",res2);

    //XOR USING NAND

    int po=v1&v2;// 0101 & 1010=0000
    int po1=~po;// 1111

    int po_1=v1&po1; //0101 & 1111=0101
    int po2= ~po_1;//1010

    int po_2=v2&po1;
    int po3=~po_2;

    int op_p=po2&po3;
    int op=~op_p;

    printf("\nXor using nand output is %x",op);
}