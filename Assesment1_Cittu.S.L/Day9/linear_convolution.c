/*
Program header 
1.Objective: Write a code to calculate linear convolution of 2 signals.
            - Input: Define linear array: Ex:{1,2,3,4}
            - Impulse Response:{1,2,2,1}
            - Convolution:
                1 2 3 4
                1 2 2 1
                -------
                1 2 3 4
                  2 4 6 8
                    2 4 6 8
                      1 2 3 4
                1 4 9 15 16 11 4 => Convoluted output
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void Convolution(int *signal,int signal_size,int *impulse, int impulse_size,int *output)
{
    int output_size=signal_size+impulse_size-1;
    int index,sig,imp;

    for(index=0;index<output_size;index++)
    {
        output[index]=0;// removed garbage values
    }

    for(sig=0;sig<signal_size;sig++)
    {
        for(imp=0;imp<impulse_size;imp++)
        {
            *(output+sig+imp)+=*(signal+sig)* *(impulse+imp);
        }
    }
}

int main()
{
    int signal_size,impulse_size,index;

    printf("Enter the signal size: ");
    scanf("%d",&signal_size);
    printf("Enter the impulse size: ");
    scanf("%d",&impulse_size);

    int signal[signal_size],impulse[impulse_size];
    int output_size=signal_size+impulse_size-1;
    int output[output_size];
    printf("Enter the signal:");
    for(index=0;index<signal_size;index++)
    {
        scanf("%d",signal+index);
    }
    printf("Enter the Impulse Response:");
    for(index=0;index<impulse_size;index++)
    {
        scanf("%d",impulse+index);
    }

    Convolution(signal,signal_size,impulse,impulse_size,output);
    printf("\nConvoluted Output is: ");
    for(index=0;index<output_size;index++)
    {
        printf("%d ",*(output+index));
    }

    return 0;
}