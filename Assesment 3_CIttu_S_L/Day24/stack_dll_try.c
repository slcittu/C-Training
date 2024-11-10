
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;

//prototyping
Node *push(Node *top,int *size,int data);
Node *pop(Node *top,int *size);
void display(Node *top);
int is_empty(int size);
int is_full(int size);

void main()
{
    Node *stack =NULL;
    int size=0;
    int choice,data,cont=1;

    while(cont==1)
    {
        printf("\n1.PUSH\n2.POP\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    if(is_full(size))
                    {
                        printf("Stack overflow! Cannot push.\n");
                        break;
                    }
                    printf("Enter data to be pushed: ");
                    scanf("%d",&data);
                    stack=push(stack,&size,data);
                    display(stack);
                    break;
            case 2:if(is_empty(size))
                    {
                        printf("Stack Underflow! Canot POP.\n");
                        break;
                    }
                    stack=pop(stack,&size);
                    display(stack);
                    break;
            default:
                    printf("Invalid Choice!!\n");
                    break;
        }
        printf("Do you want to continue?(Yes-1/No-0): ");
        scanf("%d",&cont);
    }
}

//function to check stack is empty
int is_empty(int size)
{
    return size==0;
}

//function to check stack is full
int is_full(int size)
{
    return size>=SIZE;
}

//function to push data
Node *push(Node *top,int *size,int data)
{
    if(*size>=SIZE)
    {
        printf("Stack Overflow! Cannot push %d.\n",data);
        return top;
    }

    Node *newNode=(Node*)calloc(1,sizeof(Node));
    newNode->data=data;
    newNode->next=top;
    newNode->prev=NULL;

    if(top!=NULL)
    {
        top->prev=newNode;
    }

    (*size)++;
    printf("Pushed %d into stack.\n",data);
    return newNode;
}

//function to pop data
Node *pop(Node *top,int *size)
{
    int data;
    if(*size==0)
    {
        printf("Stack Underflow! Cannot POP.\n");
        return NULL;
    }

    Node *temp=top;
    data=temp->data;
    top=top->next;

    if(top!=NULL)
    {
        top->prev=NULL;
    }

    (*size)--;
    printf("Popped %d from stack.\n",data);
    return top;
}

//function to display stack
void display(Node *top)
{
    if(top==NULL)
    {
        printf("Stack is empty!\n");
        return;
    }

    Node *current=top;
    printf("Updated Stack: ");
    while(current!=NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}

