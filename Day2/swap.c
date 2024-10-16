#include <stdio.h>

void main()
{
    int v1=10,v2=20;
printf("Before Swap\nv1=%d,v2=%d\n",v1,v2);

    v1=v1+v2;
    v2=v1-v2;
    v1=v1-v2;
    printf("After First Swap\nv1=%d,v2=%d\n",v1,v2);
    v1=v1*v2;
    v2=v1/v2;
    v1=v1/v2;
    printf("After Second Swap\nv1=%d,v2=%d\n",v1,v2);
}