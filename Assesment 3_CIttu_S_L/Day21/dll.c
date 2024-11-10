/*
Program header 
1.Objective: Write code to implemenet Doubly Linked List
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

void main()
{
    first_node();
    printf("%d ",head->data);
}

void first_node()
{
    Node *new_node;
    new_node=(Node*)malloc(sizeof(Node));
    new_node->data=1;
    new_node->next=NULL;
    new_node->prev=NULL;
    head=new_node;
    temp=new_node;
}
