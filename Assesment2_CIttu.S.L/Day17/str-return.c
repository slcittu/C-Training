/*
Program header 
1.Objective: Write code to implemenet return structure from function as pointer
2.Revisions: Nil
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

struct student
{
    char name[10];
};
struct student* get_student_data(struct student *p)
{
    printf("Enter name: ");
    scanf("%s",(p->name));
    return p;

}
void main()
{
    struct student s1,*s2;
    s2=&s1;
    struct student *s3=get_student_data(s2);
    printf("Name:%s\n",s3->name);
}