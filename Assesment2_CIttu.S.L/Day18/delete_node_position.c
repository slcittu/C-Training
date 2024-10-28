/*
Program header 
1.Objective:Write code to delete a node at given position from linked list
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
void delete_pos();

//Global declarations
struct Node *head,*temp;
int total_nodes=0;
//head pointer always points to the first node
//temp pointer is user to traverse through list

void main()
{
    int no_of_nodes=0,index,choice=1;
    printf("Enter no.of nodes you want to add to the list: ");
    scanf("%d",&no_of_nodes);
    first_node();
    for(index=1;index<no_of_nodes;index++)
    {
        new_node();
    }
    print();
    while(1)
    {
        printf("Enter your choice:\n1.Add new nodes\n2.Delete a node: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            insert_at_position();
            print();
        }
        else if(choice==2)
        {
            delete_pos();
        }
        printf("Total no.of nodes: %d\n",total_nodes);
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
        else if(position==1)
        {
            insert_beginning();
        }
        else
        {
            temp=head;
            while(count<position-1)
            {

                temp=temp->next;
                count++;
            }
            printf("Enter an integer value:");
            scanf("%d",&local->v1);
            local->next=temp->next;
            temp->next=local;
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
     printf("%d \n",temp->v1);
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
void delete_pos()
{
    struct Node *temp1;
    int pos=0,count=1;
    printf("Enter the position of node to be deleted: ");
    scanf("%d",&pos);

    if(pos>total_nodes)
    {
        printf("Error!! Total no. of nodes available is %d.",total_nodes);
        return;
    }
    else if(pos==1)
    {
        temp1=head;
        head=head->next;
        free(temp1);
        total_nodes--;
    }
    else
    {
        temp1=head;

        while(count<pos-1)
        {
            temp1=temp1->next;
            count++;
        }

        temp=temp1->next;
        temp1->next=temp->next;
        free(temp);
        total_nodes--;
    }

    printf("\nSuccessfully deleted node at position %d.\n",pos);
    print();
}