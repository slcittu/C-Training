/*
Program header 
1.Objective : Bitwise operator to reset a bit
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int v1=0,v2=0x1634;// 0001 0010 0011 0100
   
    v2 &=~(1<<10);
    printf("v2=%x \n", v2);

}