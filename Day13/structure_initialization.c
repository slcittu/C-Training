/*
Program header 
1.Objective: Write C code using structures to develop a grade card
            - Course code  Credits    Performance   Grade       GP_Course       GP_Course*Credits
                11          4              96         S             10              40
                12          4              88         A             9               36
                13          3              74         B             8               24
                14          2              68         C             7               14
            -Grades& GP                                       Total GP for Sem
            Grades       GP        Grade Range                         SGPA=Total GP/Total Credits
              S          10           92-100                              =114/13
              A           9           80-89                               =8.77
              B           8           70-79
              C           7           60-69

2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#include<string.h>

struct course
{
    int course_code;
    int credits;
    char grade;
    int gp;
};

struct student
{
    char name[10];
    int roll_no;

    int total_gp;
    int total_credits;
    float sgpa;
};


void sgpaCalculator()
{
    struct student s1;
    struct course c1,c2,c3,c4;
    int index;

    s1.total_credits=0;
    s1.total_gp=0;
    s1.sgpa=0;
    printf("Enter the Student Name:");
    scanf("%s",s1.name);
    printf("Enter roll no.:");
    scanf("%d",&s1.roll_no);

    for(index=0;index<4;index++)
    {
        struct course c;
        printf("Enter Course details\n");
        printf("--------------------\n");
        printf("Enter Course code:");
        scanf("%d",&c.course_code);
        printf("Enter Credits:");
        scanf("%d",&c.credits);
        printf("Enter your grade:");
        scanf(" %c",&c.grade);

        switch(c.grade)
        {
            case 'S':
                        c.gp=10;
                        break;
            case 'A':
                        c.gp=9;
                        break;
            case 'B':
                        c.gp=8;
                        break;
            case 'C':
                        c.gp=7;
                        break;
            default:
                        printf("INVALID INPUT!!");
                        c.gp=0;
                        break;


        }

        s1.total_gp+=c.gp*c.credits;
        s1.total_credits+=c.credits;
        if(index==0)
        {
            c1=c;
            printf("Course Code: %d, Credits: %d, Grade: %c, GP:%d \n",c1.course_code,c1.credits,c1.grade,c1.gp);
        }
        else if(index==1)
        {
            c2=c;
            printf("Course Code: %d, Credits: %d, Grade: %c, GP:%d \n",c2.course_code,c2.credits,c2.grade,c2.gp);

        }
        else if(index==2)
        {
            c3=c;
            printf("Course Code: %d, Credits: %d, Grade: %c, GP:%d \n",c3.course_code,c3.credits,c3.grade,c3.gp);

        }
        else
        {
            c4=c;
            printf("Course Code: %d, Credits: %d, Grade: %c, GP:%d \n",c4.course_code,c4.credits,c4.grade,c4.gp);

        }
    }

    s1.sgpa=(float)s1.total_gp/s1.total_credits;

    printf("\nYour Grade Card for roll no.%d\n",s1.roll_no);
    printf("--------------------------------\n");
    printf("Total GP:%d\n",s1.total_gp);
    printf("Total Credits:%d\n",s1.total_credits);
    printf("SGPA: %.2f\n",s1.sgpa);

}
void main()
{
    printf("Welcome to SGPA Calculator\n");
    sgpaCalculator();
}