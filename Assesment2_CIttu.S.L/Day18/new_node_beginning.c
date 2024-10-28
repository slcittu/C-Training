/*
Program header 
1.Objective:Write code to implemenet Singly Linked List, new node at beginning of list
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
void insert_beginning();
void print();

//Global declarations
struct Node *head,*temp;
//head pointer always points to the first node
//temp pointer is user to traverse through list

void main()
{
    int no_of_nodes=5,index;
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        insert_beginning();
    }
    print();

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
}
