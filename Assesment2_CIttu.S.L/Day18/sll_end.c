/*
Program header 
1.Objective: Write code to implemenet Singly Linked List, new node at end of list
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


//Global declarations
struct Node *head,*temp;


void main()
{
    int no_of_nodes=5,index;
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        new_node();
    }

}
//first node creation
void first_node(struct Node*head,int data)
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
    }

}
