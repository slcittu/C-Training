//coding challenge

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node* createLinkedList(int n);
void print(struct Node *head);
struct Node *addNumbers(struct Node *l1,struct Node *l2);

void main()
{
    int n1, n2;

    printf("Enter the number of nodes in the first node: ");
    scanf("%d",&n1);
    struct Node* l1 = createLinkedList(n1);
    print(l1);
    printf("Enter the number of of nodes in the second node: ");
    scanf("%d",&n2);
    struct Node *l2=createLinkedList(n2);
    printf("\nFirst node: ");
    print(l1);
    printf("Second node: ");
    print(l2);
    struct Node* result=addNumbers(l1,l2);
    printf("Result: ");
    print(result);
}
struct Node* createLinkedList(int n) 
{
    struct Node *head=NULL,*tail;
    int index;

    for (index=0;index<n;index++) 
    {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        
        int value;
        printf("Enter number %d: ",index+1);
        scanf("%d", &value); 
       
        newNode->data = value;
        newNode->next = NULL;
        
        if (head == NULL) 
        {
            head = newNode; 
            tail = head;
        } else 
        {
            tail->next = newNode; 
            tail = tail->next; 
        }
    }
    return head;
}

void print(struct Node * head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

struct Node *addNumbers(struct Node *l1,struct Node *l2)
{
    struct Node *result=NULL;

    while (l1!=NULL||l2!=NULL)
    {
        int sum=0;
        if(l1!=NULL)
        {
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum+=l2->data;
            l2=l2->next;
        }

        struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
        newNode->data=sum;
        newNode->next=result;//inserting the sum at head(to store in reverse)
        result=newNode;
    }

    return result;
}
