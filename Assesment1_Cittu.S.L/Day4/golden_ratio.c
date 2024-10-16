/*
Program header 
1.Objective : Write a code to generate a series in which ratio of two consecutive nos is converging toapproximately 1.62
 2.Revisions: Nil
3.Date & time of revision :04/10/24
4.Author Name: Cittu S L
*/


#include <stdio.h>
#include<math.h>

int main()
{
    int first=0,second=1,third;
    float diff=1;
    for(int i=0;i<10;i++)
    {   
        
         third=first+second;
         first=second;
         second=third;

         diff=(float)second/(float)first;
         printf("%f\n",diff);
    }
   return 0;
}

