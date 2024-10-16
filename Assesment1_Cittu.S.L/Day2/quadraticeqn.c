/*
Program header 
1.Objective : Write a C code to evaluate quadratic equation. Capture coefficients from user.
2.Revisions : Nil
3.Date & time of revesion : 02/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;

    double root1, root2, d, real=0, imaginary;

    printf("Enter Coefficients of a: ");
    scanf("%d",&a);

     printf("Enter Coefficients of b: ");
    scanf("%d",&b);

     printf("Enter Coefficients of c: ");
    scanf("%d",&c);

    if(a==0)
    {
        printf("ERROR!!!");
        return 1;

    }

    d=(b*b)-(4*a*c);


    if(d>0)
    {
        root1=((-b+sqrt(d))/(2*a));
        root2=((-b-sqrt(d))/(2*a));

        printf("The Equation has Real and Distinct Roots: Root 1 = %.2lf and Root 2 = %.2lf",root1, root2);
    }
    else if(d==0)
    {
        root1=-b/(2*a);

        printf("The Equation has one Real root: %.2lf",root1);
    }
    else
    {
        real=-b/(2.0*a);
        imaginary=sqrt(-d)/(2*a);

        printf("The Equation has Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi",real,imaginary,real,imaginary);
    }
    return 0;
}
