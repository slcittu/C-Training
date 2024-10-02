#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;

    double root1, root2, d, real, imaginary;

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
}