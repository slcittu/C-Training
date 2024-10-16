#include <stdio.h>

void main()
{
   int condition,v1=10,v2=20,v3=5,res;
   printf("Enter the condition(0/1): ");
   scanf("%d",&condition);
   
   if(condition==0)
   {
       res=v1+(v2-v3);
   }
   else
   {
       res=v1+v2-v3;
   }
   
   printf("Result: %d",res);
}

