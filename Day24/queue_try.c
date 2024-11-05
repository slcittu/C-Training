
#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 10

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;

//prototyping
Node *enqueue(Node *rear,int data);
Node *dequeue(Node *front);
void display(Node *front);
int is_full();
int is_empty();

//global varibales
int size=0;

void main()
{
    Node *rear=NULL;
    Node *front =NULL;
    int choice,data,cont=1;

    while (cont==1)
    {
        printf("\n1.Enqueue\n2.Dequeue\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:if (is_full(size))
                    {
                        printf("Queue is full! Cannot enqueue.\n");
                        break;
                    }
                    printf("Enter data to be enqueued: ");
                    scanf("%d",&data);
                    rear=enqueue(rear,data);
                    if(front==NULL)
                    {
                        front=rear;
                    }
                    display(front);
                    break;
            case 2:if(is_empty(size))
                    {   
                        printf("Queue is empty! Cannot dequeue.\n");
                        break;
                    }
                    front=dequeue(front);
                    if(front==NULL)
                    {
                        rear=NULL;
                    }
                    display(front);
                    break;
            default:
                    printf("Invalid choice!\n");
                    break;
        }
        printf("Do you want to continue?(Yes-1/No-0): ");
        scanf("%d",&cont);
    }
}

//function to check queue is empty
int is_empty()
{
    return size==0;
}

//function to check queue is full
int is_full()
{
    return size>=MAX_LENGTH;
}

//function to enqueue
Node *enqueue(Node *rear,int data)
{
    Node *newNode=(Node*)calloc(1,sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;

    if(rear==NULL)
    {
        newNode->prev=NULL;
    }
    else
    {
        newNode->prev=rear;
        rear->next=newNode;
    }
    size++;
    printf("%d data Enqueued.",data);
    return newNode;
}

//function to dequeue
Node *dequeue(Node *front)
{
    int data;
    Node *temp=front;
    data=temp->data;
    printf("Dequeued %d from the queue.",data);

    front=front->next;
    if(front!=NULL)
    {
        front->prev=NULL;
    }
    size--;
    return front;
}
void display(Node *front)
{
    if(front==NULL)
    {
        printf("Queue empty!.\n");
        return;
    }

    Node *temp=front;
    printf("Updated Queue: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
