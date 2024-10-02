#include<stdio.h>

int OnesCount(int number)
{
    int count=0;
    while(number)
    {
        count+=number&1;

        number>>=1;
    }
    return count;
}
void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    int count=OnesCount(number);

    printf("Number of 1's in %d is: %d",number,count);
}
