/*
Program header 
1.Objective: Write code to store 10 values of harmonic series in array
            N th number = 1/a + (n-1)d
            a=first number in series
            d=difference
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

int main()
{
    double harmonic[10];
    double *ptr=harmonic;
    double a, d;
    int index;

    printf("Enter the first term(a) and difference(d) for the series: ");
    scanf("%lf %lf",&a,&d);

    for(index=0;index<10;index++)
    {
        *(ptr+index)=1/(a+index*d);
    }

    printf("The harmonic series is: \n");
    for(index=0;index<10;index++)
    {
        printf("%.4f ",*(ptr+index));
    }

    return 0;
}

