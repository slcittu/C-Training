/*
Program header 
1.Objective:Write function to swap 2 nodes position.
2.Revisions: Nil
3.Date & time of revision :24/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<stdlib.h>


struct Node
{
    char name[10];
    struct Node *next;
};

void first_node();
void new_node();

void print();
void swap();

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
    printf("List before swap:\n");
    print();
    swap();
    printf("List after swap:\n");
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
void swap()
{
    struct Node *temp1=head,*temp2=head,*prev1=NULL,*prev2=NULL;
    int pos1,pos2,count1=1,count2=1;

    printf("Enter the first position to swap: ");
    scanf("%d",&pos1);

    printf("Enter the second position to swap: ");
    scanf("%d",&pos2);

    while(count1<pos1&&temp1!=NULL)
    {
        prev1=temp1;
        temp1=temp1->next;
        count1++;
    }

    while(count2<pos2&&temp2!=NULL)
    {
        prev2=temp2;
        temp2=temp2->next;
        count2++;
    }
    if(prev1!=NULL)
    {
        prev1->next=temp2;
    }
    else
    {
        head=temp2;
    }

    if(prev2!=NULL)
    {
        prev2->next=temp1;
    }
    else
    {
        head=temp1;
    }

    temp=temp1->next;
    temp1->next=temp2->next;
    temp2->next=temp;
    
}


void print()
{
    temp=head;//temp is pointing to first node
    while(temp->next!=NULL)
    {
        printf("%s\n",temp->name);
        temp=temp->next;//move temp pointer to next node
    }
     printf("%s \n",temp->name);
}
