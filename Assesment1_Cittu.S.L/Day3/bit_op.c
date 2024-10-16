/*
Program header 
1.Objective : Bitwise operator 
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int v1=10;//1010
    v1=v1<<2;//101000
    printf("v1= %d \n",v1);
    v1=v1>>2;//1010
    printf("v1=%d \n", v1);
    v1=v1>>1;  //0101
    printf("v1=%d \n", v1);

    
}