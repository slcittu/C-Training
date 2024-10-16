/*
Program header 
1.Objective :Write a code to deisplay hex equivalent of decimal values in array
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>

int main()
{
    int decimal[10];
    int index,size,deci,iteration,hex_index;

    printf("Enter the no of elements in the array:");
    scanf("%d",&size);

    for(index=0;index<size;index++)
    {
        printf("Enter the %d decimal number:",index+1);
        scanf("%d",&decimal[index]);
    }

    for(index=0;index<size;index++)
    {
        deci=decimal[index];
        int hex[8];
        hex_index=0;
        while(deci>0)
        {
            int remainder=deci%16;
            if(remainder<10)
            {
                hex[hex_index]=remainder+'0';
            }
            else
            {
                hex[hex_index]=remainder-10 + 'A';
            }
            deci/=16;
            hex_index++;
        }
        printf("Decimal value: %d",decimal[index]);
        printf(" Hex Value: ");
        for(iteration=hex_index-1;iteration>=0;iteration--)
        {
            printf("%c",hex[iteration]);
        }
        printf("\n");
    }
    return 0;
}