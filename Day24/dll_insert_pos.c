
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
int totalNodes=0;

//function prototyping
void first_node();
void createNodeBeginning();
void createNode();
void createNodeAtPosition();
void main()
{
    int choice=1,add;
    first_node();
         while(choice==1)
        {
            printf("Where you want to add new node.\n1.Insert at beginning\n2.Insert at end\n3.Insert at a given position: ");
            scanf("%d",&add);

            if(add==1)
            {
                createNodeBeginning();
            }
            else if(add==2)
            {
                createNode();
            }
            else if(add==3)
            {
                createNodeAtPosition();
            }
            printf("Do you want to insert more nodes: (yes-1/no-0):");
            scanf("%d",&choice);
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
     
    printf("Enter an integer(first node): ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    new_node->prev=NULL;
    head=new_node;
    temp=new_node;
    totalNodes++;
}

//function to create node at the end
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
    totalNodes++;
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
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
    totalNodes++;
    
}
//adding new node at a given position of list
void createNodeAtPosition()
{
    int count=1,pos;
    temp=head;

    printf("Enter the position to insert node: ");
    scanf("%d",&pos);
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));

    if(pos<0|| pos>totalNodes+1)
    {
         printf("Error! No enough nodes..\n");
    }
    else if(pos==totalNodes+1)
    {
        temp=head;
        createNode();
    }
    else if(pos==1)
    {
       createNodeBeginning();
    }
    else
    {
        Node *prev_node,*next_node;
    
        prev_node=head;
        next_node=NULL;
        while(count<pos-1)
        {

            prev_node=prev_node->next;
            count++;
        }
        next_node=prev_node->next;

        printf("Enter an integer value:");
        scanf("%d",&new_node->data);

        new_node->next=next_node;
        new_node->prev=prev_node;
        prev_node->next=new_node;
        next_node->prev=new_node;

        totalNodes++;

    }
}