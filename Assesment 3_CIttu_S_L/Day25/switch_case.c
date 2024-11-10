//implement switch case withput using switch command

#include<stdio.h>
//function prototyping
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

void main()
{
    void (*fun_ptr_arr[])(int,int)={add,sub,mul,div};
    int choice,n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter your choice:\n1.Add\n2.Sub\n3.Multiply\n4.Divide: ");
    scanf("%d",&choice);

    (fun_ptr_arr[choice-1])(n1,n2);
}

void add(int v1,int v2)
{
    printf("%d + %d: %d",v1,v2,v1+v2);
}

void sub(int v1,int v2)
{
    printf("%d - %d: %d",v1,v2,v1-v2);
}
void mul(int v1,int v2)
{
    printf("%d * %d: %d",v1,v2,v1*v2);
}
void div(int v1,int v2)
{
    printf("%d / %d: %d",v1,v2,v1/v2);
}