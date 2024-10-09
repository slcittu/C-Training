/*
Program header 
1.Objective :Create an array containing Hex digits as characters using their ASCII value.
            -Declaration : char array[16]
            -output: Array[]= {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F};
            -ASCII value of ZERO is 0x30
            -0-9 = 0x30 to 0x39
            -A-F = 0x41 to 0x46
            - Array[0] = 0x39 then Array[0] = '0'
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    char arr[16];
    int index,lc=0x30,uc=0x41;

    for(index=0;index<10;index++)
    {
        arr[index]=lc+ index;

    }

    for (index=10; index<16;index++)
    {
        arr[index]=uc+(index-10);
    }

    printf("Array[]={");

    for(index=0;index<16;index++)
    {
        printf("%c ",arr[index]);
        if(index<15)
        {
            printf(",");
        }
    }
    printf("}\n");
    
    return 0;
}