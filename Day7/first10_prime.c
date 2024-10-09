/*
Program header 
1.Objective: Write a code to store first 10 prime numbers in array and print ratio of successive elements
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int prime[10];
    int count=0,num=2,flag,index;
    double ratio;
    int *ptr=prime;

    while(count<10)
    {
        flag=1;
        for(index=2;index*index<=num;index++)
        {
            if(num%index==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            *(ptr+count)=num;
            count++;
        }
        num++;
    }
    printf("First 10 prime nos are : ");
    for(index=0;index<10;index++)
    {
        printf("%d ",*(ptr+index));
    }

    printf("\nRatio of successive elements:\n");

    for(index=0;index<9;index++)
    {
        if(*(ptr+index)!=0)
        {
            ratio=(double)*(ptr+index+1)/ *(ptr+index);
            printf("\nRatio of %d and %d is %.2f",*(ptr+index+1),*(ptr+index),ratio);
        }
    }

    return 0;
}