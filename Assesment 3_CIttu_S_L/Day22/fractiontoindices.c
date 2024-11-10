/*
Program header 
1.Objective: Write code to convert a fraction to indices format
2.Revisions: Nil
3.Date & time of revision :30/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

// //prototyping
// void convertToIndices(float number);

// void main()
// {
//     float number;

//     printf("Enter a floating point number: ");
//     scanf("%f",&number);

//     convertToIndices(number);
// }

// void convertToIndices(float number)
// {
//     int exponent=0,coeff=0;
//     float temp=number;

//     while(temp<1 && temp>0)
//     {
//         temp*=10;
//         exponent--;
//     }

//     while(temp>=10)
//     {
//         temp/=10;
//         exponent++;
//     }

//     coeff=(int)(temp*100);

//     if(coeff>=100)
//     {
//         coeff/=10;
//         exponent++;
//     }
//     exponent-=2;

//     printf("Indices format: %d * 10^%d\n",coeff,exponent);
// }

void main()
{
    float num;
    int n,count=0;
     printf("Enter a floating point number: ");
     scanf("%f",&num);

    while(num!=(int)num)
    {
        num*=10;
        count--;
    }

    n=(int)num;
    printf("%d*10^%d\n",n,count);
}