/*
Program header 
1.Objective: Write code to implement Queue Operation using DLL
            - Queue: FIFO - First In First out
            - Each node of DLL acts as a Queue element
            - If MAX_LENGTH reached, display Queue full.
            Use options:
            Enter Queue
            Exit Queue
            Current Length of Queue
            Display elements
2.Revisions: Nil
3.Date & time of revision :01/11/24
4.Author Name: Cittu S L
*/


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
        printf("Queue is empty!.\n");
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
int is_full()
{
    return size>=MAX_LENGTH;
}
int is_empty()
{
    return size==0;
}