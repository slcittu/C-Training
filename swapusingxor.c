#include <stdio.h>

void main()
{
    int v1=10,v2=20;//v1=1010,v2=1100
printf("Before Swap\nv1=%d,v2=%d\n",v1,v2);

 v1=v1^v2;
 v2=v1^v2;
 v1=v1^v2;
 printf("After  Swap\nv1=%d,v2=%d\n",v1,v2);
}