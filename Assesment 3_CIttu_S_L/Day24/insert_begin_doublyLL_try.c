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
void createNode();
void main()
{
    int n,index,choice=1,add;
    printf("Enter no of nodes to be added: ");
    scanf("%d",&n);
    first_node();
    for(index=1;index<n;index++)
    {
         while(choice==1)
    {
        printf("Where you want to add new node.\n1.Insert at beginning\n2.Insert at end:\n");
        scanf("%d",&add);

        if(add==1)
        {
            createNodeBeginning();
        }
        else if(add==2)
        {
            createNode();
        }
    }
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

//function to create new nodes
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

