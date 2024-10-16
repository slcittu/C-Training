/*
Program header 
1.Objective: Write a code to calculate nth power of a array element using pointer.
            i) Print calculated value
            ii) Address of element
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    int size,index,n,i,result;

    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size];
    int *ptr=arr;

    printf("Enter the array elements:\n");
    for(index=0;index<size;index++)
    {
        scanf("%d",(ptr+index));
    }

    printf("Enter the power(n) to calculate:");
    scanf("%d",&n);

    printf("Enter the array index to find the power:");
    {
        scanf("%d",&index);
    }
    
        result=1;
        for(i=0;i<n;i++)
        {
            result*=*(ptr+index);
        }

        printf("%dth power of %d with addres %d is %d(Index=%d)\n",n,*(ptr+index),(ptr+index),result,index);
    return 0;
   
}