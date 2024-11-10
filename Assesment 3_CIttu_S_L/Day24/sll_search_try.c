
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node
{
    char name[10];
    struct Node *next;
};

void search();
void first_node();
void new_node();
void print();

struct Node *head,*temp;


void main()
{
    int no_of_nodes=0,index;
    printf("Enter no.of nodes you want to add to the list: ");
    scanf("%d",&no_of_nodes);
    first_node();
    
    for(index=1;index<no_of_nodes;index++)
    {
        new_node();
    }
    print();
    search();

}

//first node creation
void first_node()
{
    struct Node *local;
    local=(struct Node*)malloc(sizeof(struct Node));
    if(local==NULL)
    {
        printf("Memory allocation failed!");
        return;
    }
    else
    {
        head=local;
        temp=local;
        printf("Enter name:");
        scanf("%s",&local->name);
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
        return;
    }
    else
    {
        temp=head;//temp is pointing to first node
        while(temp->next!=NULL)
        {
            temp=temp->next;//move temp pointer to next node
        }
        temp->next=local;//previous node-> next is pointing to new node
        printf("Enter name:");
        scanf("%s",&local->name);
        temp=local;
        temp->next=NULL;//new node next pointer is NULL
    }

}

void search()
{
    char name[10];
    int flag=0;
    printf("Enter the name to be searched: ");
    scanf("%s",name);

    temp=head;

    while(temp!=NULL)
    {
        if(strcmp(temp->name,name)==0)
        {
            printf("Name %s is found in the list.\n",name);
            flag=1;
            break;
        }
        temp=temp->next;
    }

    if(flag==0)
    {
        printf("Name %s not found!!",name);
    }
}
void print()
{
    temp=head;
    printf("Names you entered are: ");
    while(temp!=NULL)
    {
        printf("%s\t",temp->name);
        temp=temp->next;
    }
    printf("\n");
}