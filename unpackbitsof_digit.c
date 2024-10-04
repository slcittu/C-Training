/*
Program header 
1.Objective : Unpack each bit of  a digit's binary into 4 variables
2.Revisions: Nil
3.Date & time of revision :03/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int v2=0x0C; //0000 1010;
    int b0,b1,b2,b3; //

    // b3=(v2%10);
    // v2/=10;
    // b2=(v2%10);
    // v2/=10;
    // b1=(v2%10);
    // v2/=10;
    // b0=(v2%10);

        b0=v2&1;
        v2>>=1;
        b1=v2&1;
        v2>>=1;
        b2=v2&1;
        v2>>=1;
        b3=v2&1;
        v2>>=1;
    printf("%d %d %d %d",b0,b1,b2,b3);
}