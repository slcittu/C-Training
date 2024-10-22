/*
Program header 
1.Objective: Write a code to simulate result processing and ranking the students.
            Create structure to store details of students (min 5 students)
            Create structure to store scores of exams (consider atleast 3 courses)
            Calculate the average and percentage.
            Rank the students and display toppers details.
2.Revisions: Nil
3.Date & time of revision :21/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
void input();
void sort();
void displayStudents();
void toppers();
struct student
{
    int roll;
    struct exam
    {
        int course_id;
        int marks;
    }c[3];
    float result;
}s[5];

void main()
{
    input();
    displayStudents();
    sort();
    toppers();

   
   
}

void input()
{
    int index,index1;
    printf("Enter the Details of Students.\n");
    for(index=0;index<5;index++)
    {
        printf("Enter %d Student details:\n",index+1);
        printf("Enter the roll.no:");
        scanf("%d",&s[index].roll);
        printf("Enter the Course id and Marks for 3 courses:\n");
        for(index1=0;index1<3;index1++)
        {
            printf("Enter the course id:");
            scanf("%d",&s[index].c[index1].course_id);
            printf("Enter the mark:");
            scanf("%d",&s[index].c[index1].marks);
        }

        s[index].result=(float)(s[index].c[0].marks+s[index].c[1].marks+s[index].c[2].marks)/3;
    }
}

void displayStudents()
{
    int index;
    
    printf("Marks of Students\n");
    printf("-----------------\n");
    for(index=0;index<5;index++)
    {
        printf("Roll.no: %d,Average: %.2f, Percentage: %.2f\n",s[index].roll,s[index].result,(s[index].result/100));
    }

}

void sort()
{
    int i,j,temp1;
    float temp;
     
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(s[j].result<s[j+1].result)
            {
                temp=s[j].result;
                s[j].result=s[j+1].result;
                s[j+1].result=temp;

                temp1=s[j].roll;
                s[j].roll=s[j+1].roll;
                s[j+1].roll=temp1;
                
            }
        }
    }

}

void toppers()
{
    int index;
    printf("Toppers\n");
    printf("-------\n");
    for(index=0;index<3;index++)
    {
        printf("1st Rank\n Roll.no: %d, Percentage: %.2f\n",s[index].roll,(s[index].result/100));
    }
}