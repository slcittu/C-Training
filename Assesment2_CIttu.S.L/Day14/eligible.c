/*
Program header 
1.Objective: Create an independent structure and check students eligibility for exam based on eligibility allocate seats in rooms.
                Total marks=100
                IA=50(100% weightage)
                SEE=100(50% weightage)
                Eligibility:IA>20 && Attendence >85% (No.of Classes =50)
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

struct Eligibility
{
    int ia[15];
    int attendence[15];
    int total_classs;
}e;

struct student
{
    int total_students;
    int rows;
    int eligible_students;

    struct branch
    {
        int cse[15];
        int ece[15];
    }b;
}s;

void inputStudent();
void eligibilityCheck();
void displaySeating();
void displayEligibility();

void main()
{
    inputStudent();
    eligibilityCheck();
    displayEligibility();
    displaySeating();
}

void inputStudent()
{
    printf("Enter the total no.of CSE Students: ");
    scanf("%d",&s.b.cse);
    printf("Enter the total no.of ECE Students: ");
    scanf("%d",&s.b.ece);

    s.total_students=s.b.cse+s.b.ece;

    printf("Enter the total no.of ROWS in each class: ");
    scanf("%d",&s.rows);
}

void eligibilityCheck()
{
    int count=0,st_index=1,min_attendence=(0.83*50),index;
    e.total_classs=50;

    for(index=0;index<s.total_students;index++)
    {
         printf("Enter IA Marks for Student %d (Out of 50):",index+1);
        scanf("%d",&e.ia[index]);
        printf("Enter Attendence for Student %d (Total 50 Classes):",index+1);
        scanf("%d",&e.attendence[index]);

        if(e.ia[index]>20 && e.attendence[index]>=min_attendence)
        {
            count++;
        }
    }
    s.eligible_students=count;
}

void displaySeating()
{
    int students_per_class=s.rows*4;
    int no_of_classes=(s.eligible_students+students_per_class-1)/students_per_class;

    printf("Total CSE Students: %d\n",s.b.cse);
    printf("Total ECE Students: %d\n",s.b.ece);
    printf("\nSeating ALlocated for Eligible Students:\n");
    printf("Total Students: %d\n",s.total_students);
    printf("No.of Eligible Students: %d\n",s.eligible_students);
    printf("Total no.of Rows per class: %d\n",s.rows);
    printf("No.of Students each class can accomodate: %d\n",students_per_class);
    printf("No.of Classrooms needed: %d\n",no_of_classes);

}

void displayEligibility()
{
    int index,min_attendence=(0.83*50);

    printf("\n List of Eligible Students:\n");
    for(index=0;index<s.total_students;index++)
    {
         if(e.ia[index]>20 && e.attendence[index]>=min_attendence)
        {
           printf("Student %d: IA= %d,Attendence= %d/50 \n",index+1,e.ia[index],e.attendence[index]);
        }
    }
}