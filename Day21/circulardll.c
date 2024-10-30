/*
Program header 
1.Objective: Circular doubly Linked list(circular DLL)
            - last_node->next=head
            - head->prev=last_node
            write a program to create an empty circular DLL with fixed length of 10 nodes.
            Data filed: int pID; //process ID
2.Revisions: Nil
3.Date & time of revision :29/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int pID;
    struct Node *prev;
    struct Node *next;
}Node;

//Global pointers
Node *head,*iterate;

//prototyping
void createCircularDLL();
void printCircularDLL();
void insertCircularDLL();

void main()
{
    int choice=1;
    iterate=head;
    createCircularDLL();
    printCircularDLL();
    while(choice==1)
    {
        insertCircularDLL();
        printCircularDLL();
        printf("Do you want to continue(yes-1/No-0):");
        scanf("%d",&choice);
    }
    
}
//to create an empty circular doubly linked list
void createCircularDLL()
{
    int length=10,index;
    Node* last=NULL;
    for(index=0;index<length;index++)
    {
        Node* new_node=(Node*)malloc(sizeof(Node));
        if(new_node==NULL)
        {
            printf("Memory allocation failed...\n");
            return;
        }

        new_node->pID=0;
        new_node->prev=new_node;
        new_node->next=new_node;

        if(head==NULL)
        {
            head=new_node;
        }
        else
        {
            new_node->prev=last;
            new_node->next=head;
            last->next=new_node;
            head->prev=new_node;
        }
        last=new_node;
        iterate=last;
    }
}
//to print circular doubly linked list
void printCircularDLL()
{
    if(head==NULL)
    {
        printf("No nodes in the list..\n");
    }

    Node* temp=head;

    do
    {
        printf("PID: %d\n",temp->pID);
        temp=temp->next;
    }while(temp!=head);
    printf("\n");
}
//to insert new elements(overrite) circular doubly linked list
void insertCircularDLL()
{
    iterate=iterate->next;
    printf("Enter a pID: ");
    scanf("%d",&iterate->pID);
}