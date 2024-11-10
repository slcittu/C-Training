/*
Program header 
1.Objective: Write code to implemenet Doubly Linked List, new node at beginning of list
2.Revisions: Nil
3.Date & time of revision :29/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;

//Global pointers
Node *head,*temp;

//function prototyping
void first_node();
void createNodeBeginning();

void main()
{
    int n,index;
    printf("Enter no of nodes to be added: ");
    scanf("%d",&n);
    first_node();
    
    for(index=1;index<n;index++)
    {
        createNodeBeginning();
    }
    temp=head;

    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    
}
//creating first node
void first_node()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));
     
    printf("Enter an integer: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    new_node->prev=NULL;
    head=new_node;
    temp=new_node;
}
//function to create nodes at beginning
void createNodeBeginning()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));
    temp=head;
    printf("Enter an integer: ");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    new_node->next=temp;
    head=new_node;
    
}

void createNode()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));

    printf("Enter an integer: ");
    scanf("%d",&new_node->data);
    new_node->prev=temp;
    new_node->next=NULL;
    temp->next=new_node;
    temp=new_node;
}