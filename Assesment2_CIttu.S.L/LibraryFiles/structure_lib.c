//funcion for sgpa calculation

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

//function for student eligibiliy check for exam

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
