
#include<stdio.h>
#include<stdlib.h>

#define MAX_LENGTH 10

typedef struct Node
{
    int pID;
    int priority;
    struct Node *prev;
    struct Node *next;
}Node;

//prototyping
Node *enqueue(Node *rear,Node **front,int pID,int priority);
Node *dequeue(Node *front);
void display(Node *front);
int is_full();
int is_empty();

//global varibales
int size=0;

void main()
{
    Node *front =NULL;
    Node *rear =NULL;
    int choice,pID,priority,cont=1;

    while (cont==1)
    {
        printf("\n1.Enqueue\n2.Dequeue\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:if (is_full(size))
                    {
                        printf("Queue is full!\tCannot enqueue.\n");
                        break;
                    }
                    printf("Enter pID to be enqueued: ");
                    scanf("%d",&pID);
                    printf("Enter priority(should be greater than ZERO): ");
                    scanf("%d",&priority);
                    rear=enqueue(rear,&front,pID,priority);
                    if(front==NULL)
                    {
                        front=rear;
                    }
                    display(front);
                    break;
            case 2:if(is_empty(size))
                    {   
                        printf("Queue is empty!\tCannot dequeue.\n");
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
Node *enqueue(Node *rear,Node **front,int pID,int priority)
{
    Node *temp,*temp1;
    Node *newNode=(Node*)calloc(1,sizeof(Node));
    newNode->pID=pID;
    newNode->priority=priority;
    newNode->next=NULL;

    if(*front==NULL)
    {
        *front=rear=newNode;
    }
    else
    {
        temp=*front;
        while(temp!=NULL && temp->priority<=priority)
        {
            temp=temp->next;
        }
        if(temp==*front)
        {
            newNode->next=*front;
            (*front)->prev=newNode;
            *front=newNode;
        }
        else if(temp==NULL)
        {
            rear->next=newNode;
            newNode->prev=rear;
            rear=newNode;
        }
        else
        {
            newNode->next=temp;
            newNode->prev=temp->prev;
            temp1=temp->prev;
            temp1->next=newNode;
            temp->prev=newNode;
        }
    }
    size++;
    return rear;
}

//function to dequeue
Node *dequeue(Node *front)
{
    int pID,priority;
    Node *temp=front;
    pID=temp->pID;
    priority=temp->priority;
    printf("Dequeued %d from the queue having priority %d.\n",pID,priority);

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
    printf("Updated Queue\n");

    while(temp!=NULL)
    {
        printf("Process ID: %d, Priority: %d\n",temp->pID,temp->priority);
        temp=temp->next;
    }
    printf("\n");
}
