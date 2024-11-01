/*
Program header 
1.Objective: Write code to implemenet fixed size stack operation using array.
            - array[]
            -array_name is Base Pointer BP
            Declare another int pointer for traversing through array - STack Pointer (SP)
            BP:Always point at base (Starting) Address
            SP:Akways store address of Top of Stack(ToS)
            Push-> increment SP and then store data
            Pop-> Read data and then decrement
2.Revisions: Nil
3.Date & time of revision :30/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

//Global pointers
int stack[10];
int *BP;
int *SP;

int top=-1;

//Function Prototyping
void push(int data);
void pop();
void display();
int is_empty();
int is_full();

void main()
{
    BP=stack;
    SP=BP;

    int choice,cont=1,data;

    while(cont==1)
    {
        printf("\nChoose Stack Operation\n1.Push\n2.Pop\n3.Is empty\n4.Is full\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("Enter data to be pushed: ");
                    scanf("%d",&data);
                    if(is_full())
                    {
                        printf("Stack Overflow!! Cannot push.\n");
                        break;
                    }
                    push(data);
                    display();
                    break;
            case 2:
                    if(is_empty())
                    {
                        printf("Stack Underflow!! Cannot pop from the stack.\n");
                        break;
                    }
                    pop();
                    display();
                    break;
        case 3:
                    if(is_empty())
                    {
                        printf("Empty Stack.\n");
                        break;
                    }
                    else
                    {
                        printf("Stack is not empty.\n");
                    }
                    break;
        case 4:
                     if(is_full())
                    {
                        printf("Stack Overflow!! Cannot push.\n");
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

//function to push data to stack
void push(int data)
{
    // if(top>=9)
    // {
    //     printf("Stack Overflow!! Cannot push.\n");
    //     return;
    // }

    top++;
    SP=BP+top;
    *SP=data;
    printf("Pushed %d to the stack.\n",data);
}

//function to pop data from stack
void pop()
{
    int data;
    // if(top==-1)
    // {
    //     printf("Stack Underflow!! Cannot pop from the stack.\n");
    //     return;
    // }
    data=*SP;
    top--;
    SP=BP+top;
    printf("Popped data= %d\n",data);

}

//function to display updated stack
void display()
{
    int index;
    if(top==-1)
    {
        printf("Empty Stack.\n");
        return;
    }
    if(top==9)
    {
        printf("Stack is Full..\n");
    }
    printf("Total no.of elements in thse stack:%d\n",top+1);

    printf("Updated Stack: ");
    for(index=0;index<=top;index++)
    {
        printf("%d\t",*(BP+index));
    }
    printf("\n");
}

int is_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full()
{
    if(top==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}