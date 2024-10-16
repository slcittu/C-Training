/*
Program header 
1.Objective :MergeSort (Descending Order)
             -Array = {2,9,3,1}
             -Divide and Conquer method
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

int main()
{
    int index,sorted_index,temp,left_index,right_index;
    int arr[4];


    printf("Enter the 4 array elements: \n");

    for(index=0;index<4;index++)
    {
        scanf("%d",&arr[index]);

    }
    
    int leftHalf[2] = {arr[0], arr[1]};
    int rightHalf[2] ={arr[2], arr[3]};


    if(leftHalf[0]<leftHalf[1])
    {
        temp=leftHalf[0];
        leftHalf[0]=leftHalf[1];
        leftHalf[1]=temp;
    }

     if(rightHalf[0]<rightHalf[1])
    {
        temp=rightHalf[0];
        rightHalf[0]=rightHalf[1];
        rightHalf[1]=temp;
    }
    left_index=0,right_index=0,sorted_index=0;

    while(left_index<2 && right_index<2)
    {
        if(leftHalf[left_index]>rightHalf[right_index])
        {
            arr[sorted_index++]=leftHalf[left_index++];
        }
        else
        {
            arr[sorted_index++]=rightHalf[right_index++];
        }
    }

    while (left_index<2)
    {
        arr[sorted_index++]=leftHalf[left_index++];
    }

    while (right_index<2)
    {
        arr[sorted_index++]=rightHalf[right_index++];
    }
    
    printf("\nLeft Half: %d %d ",leftHalf[0],leftHalf[1]);
    printf("Right Half: %d %d ",rightHalf[0],rightHalf[1]);

     printf("\n Sorted Arrays is :");

    for(index=0;index<4;index++)
    {
        printf("%d ",arr[index]);
    }

    return 0;
    
}