/*
Program header 
1.Objective: Write code to implement 2 stacks in single array.
            - BP of stack1 will point at beginnig of array
            - BP of stack2 will point to end of array
            - Then set SPs accordingly
            - Stack size is half of array size of each other
2.Revisions: Nil
3.Date & time of revision :30/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#define size 4
//Global variables
int stack[size];
int top1=-1;
int top2=size;

//Function prototyping
void push(int stack_no, int data);
void pop(int stack_no);
int is_empty(int stack_no);
int is_full();
void display();

void main()
{
    int choice,cont=1,data;

    while(cont==1)
    {
        printf("\nChoose Stack Operation\n1.PUSH to Stack 1\n2.PUSH to Stack 2\n3.POPfrom Stack 1\n4.POP from Stack 2\n5.Is stack 1 empty\n6.Is stack 2 empty\n7.Is stack full\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    if(is_full()||top1>=(size/2)-1)
                    {
                        printf("Stack Overflow!! Cannot push.\n");
                        break;
                    }
                    printf("Enter data to be pushed into stack 1: ");
                    scanf("%d",&data);
                    push(1,data);
                    display();
                    break;
            case 2:
                    if(is_full()||top2<=(size/2))
                    {
                        printf("Stack Overflow!! Cannot push.\n");
                        break;
                    }
                    printf("Enter data to be pushed into stack 2: ");
                    scanf("%d",&data);
                    push(2,data);
                    display();
                    break;
            case 3:
                    if(is_empty(1))
                    {
                        printf("Stack 1 Underflow!! Cannot pop from the stack.\n");
                        break;
                    }
                    pop(1);
                    display();
                    break;
            case 4:
                    if(is_empty(2))
                    {
                        printf("Stack 2 Underflow!! Cannot pop from the stack.\n");
                        break;
                    }
                    pop(2);
                    display();
                    break;
            case 5:
                    if(is_empty(1))
                    {
                        printf("Stack 1 Empty!!! \n");
                        break;
                    }
                    else
                    {
                        printf("Stack 1 is not empty.\n");
                    }
                    break;
            case 6:
                    if(is_empty(2))
                    {
                        printf("Stack 2 Empty!!! \n");
                        break;
                    }
                    else
                    {
                        printf("Stack 2 is not empty.\n");
                    }
                    break;
            case 7:
                     if(is_full())
                    {
                        printf("Stack Full!!\n");
                        break;
                    }
                    else
                    {
                        printf("Stack is not full.\n");
                    }
                    break;
        default:
                    printf("Invalid choice!!!\n");
                    break;
        }

        printf("Do you want to continue?(Yes-1/No-0)");
        scanf("%d",&cont);
    }
}

void push(int no,int data)
{

    if(no==1&&top1<(size/2))
    {
        top1++;
        stack[top1]=data;
        printf("Pushed %d to stack 1.\n",data);
    }
    else if(no==2&&top2>(size/2))
    {
        top2--;
        stack[top2]=data;
        printf("Pushed %d to stack 2.\n",data);
    }
}

void pop(int no)
{
    int data;
    if(no==1 && top1>=0)
    {
        data=top1;
        top1--;
        printf("Popped %d from stack 1.\n",data);
    }
    else if(no==2 && top2<size)
    {
        data=top2;
        top2++;
        printf("Popped %d from stack 2.\n",data);
    }
}
int is_empty(int no)
{
    if(no==1)
    {
        if(top1==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(no==2)
    {
        
        if(top2==size)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int is_full()
{
    if(top1+1==top2||top1>((size/2)-1)||top2<=(size/2))
    {
        return 1;
    }
    else
    return 0;
}

void display()
{
    int index;
    printf("Updated Stack 1: ");
    for(index=0;index<=top1;index++)
    {
        printf("%d ",stack[index]);
    }
    printf("\n");

     printf("Updated Stack 2: ");
    for(index=(size-1);index>=top2;index--)
    {
        printf("%d ",stack[index]);
    }
    printf("\n");


}