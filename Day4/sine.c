/*
Program header 
1.Object`ve : Implementation of Sine value of upto 360 degree with a step angle 15 degree
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int deg, step;
    #define PI 3.14
    float sine = 0.0, rad;


    for(step = 0; step <= 360; step += 15)
    {
        deg = step; 
        rad = deg * (PI / 180.0);
        sine = sin(rad);
        printf("\nSin(%d) = %.2f", deg, sine);
    }

    return 0;
}
