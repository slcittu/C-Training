/*
Program header 
1.Objective:Write code to implemenet Singly Linked List
            write function to insert node at given position.
            - position user input
            - check if position is less than total no.of nodes
            - then insert at position
2.Revisions: Nil
3.Date & time of revision :24/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int v1;//data section of node
    struct Node *next;//pointer section or link section of node => Self referential pointers
};

//prototyping
void first_node();
void new_node();
void insert_beginning();
void insert_at_position();
void print();

//Global declarations
struct Node *head,*temp;
int total_nodes=0;
//head pointer always points to the first node
//temp pointer is user to traverse through list

void main()
{
    int no_of_nodes=5,index,choice=1;
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        new_node();
    }
    print();

    while(choice==1)
    {
        //insert_at_position();
        printf("Do you want to add more nodes?(Yes-1/NO-0):");
        scanf("%d",&choice);
            insert_at_position();
            print();
    }
    printf("Total no.of nodes: %d",total_nodes);


}
//first node creation
void first_node()
{
    struct Node *local;
    local=(struct Node*)malloc(sizeof(struct Node));
    if(local==NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        head=local;
        temp=local;
        printf("Enter an integer value:");
        scanf("%d",&local->v1);
        local->next=NULL;
        total_nodes++;
    }
}
//adding new node to the beginning of list
void insert_beginning()
{
    struct Node *local;
    local=(struct Node*)malloc(sizeof(struct Node));
    if(local==NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        temp=head;
        printf("Enter an integer value:");
        scanf("%d",&local->v1);
        local->next=temp;
        head=local;
        total_nodes++;
    }
}

//adding new node at a given position of list
void insert_at_position()
{
    struct Node *local;
    local=(struct Node*)malloc(sizeof(struct Node));
    int position,count=1;
    if(local==NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        printf("Enter the position to insert new node:");
        scanf("%d",&position);
        if(position>total_nodes+1||position<=0)
        {
            printf("Error! No enough nodes..\n");
        }
        else if(position==total_nodes+1)
        {
            new_node();
        }
        else if(position=1)
        {
            insert_beginning();
        }
        else
        {
             struct Node *temp1;
            temp1=(struct Node*)malloc(sizeof(struct Node));
            temp=head;
            while(count<position-1)
            {

                temp1=temp1->next;
                count++;
            }
            printf("Enter an integer value:");
            scanf("%d",&local->v1);
            local->next=temp1->next;
            temp1->next=local;
            total_nodes++;

        }
    }
}

void print()
{
    temp=head;//temp is pointing to first node
    while(temp->next!=NULL)
    {
        printf("%d ",temp->v1);
        temp=temp->next;//move temp pointer to next node
    }
     printf("%d ",temp->v1);
}

//new node creation in list
void new_node()
{
    struct Node *local;
    local=(struct Node*)malloc(sizeof(struct Node));
    if(local==NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        temp=head;//temp is pointing to first node
        while(temp->next!=NULL)
        {
            temp=temp->next;//move temp pointer to next node
        }
        temp->next=local;//previous node-> next is pointing to new node
        printf("Enter an integer value:");
        scanf("%d",&local->v1);
        temp=local;
        temp->next=NULL;//new node next pointer is NULL
        total_nodes++;
    }

}
