/*
Program header 
1.Objective: Write C code to copy structure member data of st1 to st2.
            - Define structure template
            - Create multiple variables of structure
            - Capture data for one structure from user
            - Copy all member data to another structure
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

struct library
{
    int book_no;
    char book_name[20];
    float price;
};

void main()
{
    struct library l1,l2;

    printf("Enter the details of the book: ");
    printf("\nBook no.:");
    scanf("%d",&l1.book_no);
    printf("Book Name: ");
    scanf("%s",l1.book_name);
    printf("Enter the price of book:");
    scanf("%f",&l1.price);
    printf("------------------------\n");

    // l2.book_no=l1.book_no;
    // strcpy(l2.book_name,l1.book_name);
    // l2.price=l1.price;
    l2=l1;
    printf("The Book details: ");
    printf("\nBook no.: %d ",l2.book_no);
    printf("\nBook Name: %s",l2.book_name);
    printf("\nBook Price: %.2f",l2.price);
}
