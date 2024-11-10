
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int v1;
    struct Node *next;
};

//prototyping
void first_node();
void new_node();


//Global declarations
struct Node *head,*temp;


void main()
{
    int no_of_nodes,index;
    printf("Enter the no.of nodes: ");
    scanf("%d",&no_of_nodes);
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        new_node();
    }

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
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=local;
        printf("Enter an integer value:");
        scanf("%d",&local->v1);
        temp=local;
        temp->next=NULL;
    }

}
