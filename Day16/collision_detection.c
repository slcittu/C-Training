/*
Program header 
1.Objective:  Write a c code for collision detection system in vehicles.
            -Gyroscope angle => <10 (4 wheeler)-double for collision
            -Vibration: 10(normal),50+/100(collision)
            -accelerometer => 100+(collision)  
2.Revisions: Nil
3.Date & time of revision :22/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

struct sensor
{
    double gyroscope;
    int vibration;
    int accelerometer;
}s,*ptr;

void input();
void collisionCheck();

void main()
{
    
    
    ptr=&s;
    input();
    collisionCheck();
}
//to take sensor inputs from user
void input()
{
    printf("Enter Gyroscope angle: ");
    scanf("%lf",&(*ptr).gyroscope);

    printf("Enter Vibration level: ");
    scanf("%d",&(*ptr).vibration);

    printf("Enter accelerometer value: ");
    scanf("%d",&(*ptr).accelerometer);
}
//to chekc collision occurs or not
void collisionCheck()
{
    if((*ptr).gyroscope>=20 && (*ptr).vibration>=50 && (*ptr).accelerometer>=50)
    {
        printf("Collision detected!!!");
    }
    else
    {
        printf("No collision detected.");
    }
}