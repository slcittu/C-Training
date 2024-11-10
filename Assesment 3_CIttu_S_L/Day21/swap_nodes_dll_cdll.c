/*
Program header 
1.Objective: Write a function to swap the nodes in DLL/CDLL
            - N1->N2->N3->N4->N5
            swap(N2 & N4)
            - temp=N2->next
            - N4->next=temp
            - temp=N2->prev
            - N4->prev=temp        
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
void swapNodes();

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
        printf("Do you want to continue adding data to the list (yes-1/No-0):");
        scanf("%d",&choice);
    }

    choice=1;
    swapNodes();
     printCircularDLL();
    
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

void swapNodes()
{
    Node *node1=head;
    Node *node2=head;
    int pos1,pos2,count1=1,count2=1;
    printf("Enter positions to swap nodes: ");
    scanf("%d %d",&pos1,&pos2);

    if(pos1<1||pos2<1)
    {
        printf("Positions must be between 1 and 10.\n");
    }

    while(count1<pos1 && node1!=NULL)
    {
        node1=node1->next;
        count1++;
    }
    while(count2<pos2 && node2!=NULL)
    {
        node2=node2->next;
        count2++;
    }


    if(node1->next==node2)
    {
        Node* prev_node=node1->prev;
        Node* next_node=node2->next;

        prev_node->next=node2;
        node2->prev=prev_node;
        node2->next=node1;
        node1->prev=node2;
        node1->next=next_node;
        next_node->prev=node1;
    }
    else if (node2->next==node1)
    {
        Node* prev_node = node2->prev;
        Node* next_node = node1->next;

        prev_node->next = node1;
        node1->prev = prev_node;
        node1->next = node2;
        node2->prev = node1;
        node2->next = next_node;
        next_node->prev = node2;
    }
    else
    {
         Node* prev_node1=node1->prev;
        Node* next_node1=node1->next;
        Node* prev_node2=node2->prev;
        Node* next_node2=node2->next;

        prev_node1->next = node2;
        next_node1->prev = node2;
        prev_node2->next = node1;
        next_node2->prev = node1;

        node1->next = next_node2;
        node1->prev = prev_node2;
        node2->next = next_node1;
        node2->prev = prev_node1;
    }
    if (head == node1)
    {
        head = node2;
    }
    else if (head == node2)
    {
        head = node1;
    }
    
}