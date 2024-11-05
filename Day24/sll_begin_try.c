
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int v1;
    struct Node *next;
};

//prototyping
void first_node();
void insert_begin();
void print();

//Global declarations
struct Node *head,*temp;


void main()
{
    int no_of_nodes=5,index;
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        insert_begin();
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
void insert_begin()
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

//function to print added nodes
void print()
{
    temp=head;//temp is pointing to first node
    while(temp->next!=NULL)
    {
        printf("%d ",temp->v1);
        temp=temp->next;//move temp pointer to next node
    }
}
