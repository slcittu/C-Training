/*
Program header 
1.Objective: Write c code for examination seating allocation using embedded nesting.
             There are 2 branches : CSE,ECE
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct branches
{
    int total_Cse;
    int total_Ece;
};

struct seating
{
    int total_students;
    int rooms;
    int students_per_rooms;
    struct branches b;
};

void main()
{
    struct seating s;
    int choice,index1,index2;

    printf("Choose any option below\n");
    printf("1.Enter total no.of students and total no.of rooms\n");
    printf("2. Enter total students and students per row\n");
    printf("3. Enter total no.of rooms and students per row\n");

    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
                printf("Enter total no.of students: ");
                scanf("%d",&s.total_students);
                printf("Enter total no.of rooms: ");
                scanf("%d",&s.rooms);
                s.students_per_rooms=s.total_students/s.rooms;
                printf("Students per row: %d\n",s.students_per_rooms);
                break;
        
        case 2: 
                printf("Enter total no.of students: ");
                scanf("%d",&s.total_students);
                printf("Enter students per rooms: ");
                scanf("%d",&s.students_per_rooms);
                s.rooms=s.total_students/s.students_per_rooms;
                printf("Students per row: %d\n",s.rooms);
                break;
        case 3: 
                printf("Enter total no.of rooms: ");
                scanf("%d",&s.rooms);
                printf("Enter students per rooms: ");
                scanf("%d",&s.students_per_rooms);
                s.total_students=s.rooms/s.students_per_rooms;
                printf("Students per row: %d\n",s.total_students);
                break;
        default:
                printf("INVALID CHOICE!!!");
                return;
    }

    printf("Enter the no.of CSE Students: ");
    scanf("%d",&s.b.total_Cse);
    printf("Enter the no.of ECE Students: ");
    scanf("%d",&s.b.total_Ece);
    if(s.b.total_Cse+s.b.total_Ece>s.total_students)
    {
        printf("Exceeded the total students limit.(Splitting the seats).");
        if(s.b.total_Cse>s.b.total_Ece)
        {
            s.b.total_Cse=s.total_students-s.b.total_Ece;
        }
        else
        {
            s.b.total_Ece=s.total_students-s.b.total_Cse;
        }
    }


    printf("\nTotal CSE Students: %d",s.b.total_Cse);
    printf("\nTotal ECE Students: %d",s.b.total_Ece);

    printf("\nSeating Arrangement for CSE and ECE: \n");
    for(index1=0;index1<s.rooms;index1++)
    {
        for(index2=0;index2<s.students_per_rooms;index2++)
        {
            if(index2%2==0 && s.b.total_Cse>0)
            {
                printf("CSE ");
                s.b.total_Cse--;
            }
            else if(index2%2==1 && s.b.total_Ece>0)
            {
                printf("ECE ");
                s.b.total_Ece--;
            }
            else if(s.b.total_Cse>0)
            {
                printf("CSE ");
                s.b.total_Cse--;
            }
            else if(s.b.total_Ece>0)
            {
                printf("ECE ");
                s.b.total_Ece--;
            }
        }
        printf("\n");
    }
}