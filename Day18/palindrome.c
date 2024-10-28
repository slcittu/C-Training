//Coding challenge

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char data; 
    struct Node* next;
};

struct Node *head,*temp;

// Function prototypes
struct Node* create_node(char data);
void insert_at_end(char data);
void print();
int palindromeCheck();


void main() 
{
    char name[20];

    printf("Enter a string: ");
    scanf("%s",name);

    for (int i = 0; i < strlen(name); i++) 
    {
        insert_at_end(name[i]);
    }

    printf("Linked List: ");
    print();
    if (palindromeCheck()) 
    {
        printf("\nThe string is a palindrome.\n");
    } 
    else 
    {
        printf("\nThe string is not a palindrome.\n");
    }
}

void insert_at_end(char data) 
{
    struct Node* local = (struct Node*)malloc(sizeof(struct Node));
    local->data = data;
    local->next = NULL;

    if (head == NULL) 
    {
        head = local;
    } 
    else 
    {
        temp = head; 
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = local; 
    }
}


void print() 
{
    temp=head;
    while (temp != NULL) 
    {
        printf("%c", temp->data);
        temp = temp->next; 
    }
}

int palindromeCheck() {
    struct Node *temp1 = head, *temp2 = head, *prev = NULL, *temp;


    while (temp2 != NULL && temp2->next != NULL) 
    {
        struct Node *nextNode=temp2->next;
        temp2 = nextNode->next;
 
        temp = temp1;
        temp1 = temp1->next;
        temp->next = prev;
        prev = temp;
    }

    if (temp2 != NULL) 
    {
        temp1 = temp1->next;
    }

    while (prev != NULL && temp1 != NULL) 
    {
        if (prev->data != temp1->data) 
        {
            return 0; 
        }
        prev = prev->next;
        temp1 = temp1->next;
    }

    return 1; 
}

