/*
Program header 
1.Objective: Write code to implemenet Doubly Linked List, 
            - delete a node at given position
            DLL:N1 -> N2 -> N3 -> N4 -> N5
            ex: Node to be deleted is N3(position 3)
            N2->Next = N3->Next
            N4->Next = N3->Next
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
int totalNodes=0;

//function prototyping
void first_node();
void createNodeBeginning();
void createNode();
void createNodeAtPosition();
void deleteNodeAtPosition();
void print();

void main()
{
    int choice=1,add;
    first_node();
         while(choice==1)
        {
            printf("What operation you want to do?\n1.Insert at beginning\n2.Insert at end\n3.Insert at a given position\n4.Delete a node at a postion: ");
            scanf("%d",&add);

            if(add==1)
            {
                createNodeBeginning();
                print();
            }
            else if(add==2)
            {
                createNode();
                print();
            }
            else if(add==3)
            {
                createNodeAtPosition();
                print();
            }
            else if(add==4)
            {
                deleteNodeAtPosition();
                print();
            }
            printf("Do you want to continue?: (yes-1/no-0):");
            scanf("%d",&choice);
        }
   
    
    
}

void print()
{
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
//function to create nodes at beginning
void createNodeBeginning()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));
    if(new_node==NULL)
    {
        printf("Memory allocation failed!!\n");
        return;
    }
    
    printf("Enter an integer: ");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    new_node->next=head;
    if(head!=NULL)
    {
        head->prev=new_node;
    }

    head=new_node;
    totalNodes++;
    
}
//function to create node at the end 
void createNode()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));

    printf("Enter an integer: ");
    scanf("%d",&new_node->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    new_node->prev=temp;
    new_node->next=NULL;
    temp->next=new_node;
    temp=new_node;
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

void deleteNodeAtPosition()
{
    int pos,count=1;

    printf("Enter the position to delete node: ");
    scanf("%d",&pos);
    if(pos<1 || pos>totalNodes)
    {
        printf("Error! Position not exist...\n");
        return;
    }

    Node* delete_node=head;
    Node* prev_node=NULL;
    Node* next_node=NULL;

    if(pos==1)
    {
        next_node=head->next;
        head=next_node;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        free(delete_node);
    }
    else if(pos==totalNodes)
    {
        while(count<pos)
        {
            delete_node=delete_node->next;
            count++;
        }

        prev_node=delete_node->prev;
        if(prev_node!=NULL)
        {
            prev_node->next=NULL;
        }
        free(delete_node);
        free(delete_node);
    }
    else
    {
        while(count<pos)
        {
            prev_node=delete_node;
            delete_node=delete_node->next;
            next_node=delete_node->next;
            count++;
        }

        prev_node->next=next_node;
        if(next_node!=NULL)
        {
            next_node->prev=prev_node;
        }
        free(delete_node);
    }
    totalNodes--;
}