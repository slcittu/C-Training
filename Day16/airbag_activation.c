/*
Program header 
1.Objective: Airbag Activation system
            1. Collision detection
            2.Check passenger
            3.Check seatbelt
            4.activate airbags and display message accordingly
            5.All above conditions are subjected to ignition status
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
    int ignition;
    int seatbelts[3];
    int passenger[3];
}s,*ptr;



void collisionInput();
int collisionCheck();
int passengerCheck();
int seatbeltCheck();
void activateAirbag(int);

void main()
{
    ptr=&s;
    (*ptr).ignition=0;
    int collision=0;
    
    printf("Enter Ignition status (ON-1/OFF-0):");
    scanf("%d",&(*ptr).ignition);

    if((*ptr).ignition==0)
    {
        printf("Ignition is OFF. Airbag doesn't work.\n");
        return;
    }

    collisionInput();

    printf("Enter seatbelts are fastened(Yes-1/No-0)for Driver, Co.Driver, Passenger: ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&(*ptr).seatbelts[i]);
    }

    printf("Enter Passengers are there (Yes-1/No-0)for Driver, Co.Driver, Passenger: ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&(*ptr).passenger[i]);
    }

    collision=collisionCheck();
    activateAirbag(collision);
}
//to take sensor input from user to check collision detected or not
void collisionInput()
{
    
    printf("Enter Gyroscope angle: ");
    scanf("%lf",&(*ptr).gyroscope);

    printf("Enter Vibration level: ");
    scanf("%d",&(*ptr).vibration);

    printf("Enter accelerometer value: ");
    scanf("%d",&(*ptr).accelerometer);
}

//to chekc collision occurs or not
int collisionCheck()
{
    if((*ptr).gyroscope>=20 && (*ptr).vibration>=50 && (*ptr).accelerometer>=50)
    {
        printf("\nCollision detected!!!\n");
        return 1;
    }
    else
    {
        printf("No collision detected.\n");
        return 0;
    }
}
//to check passengers are present 
int passengerCheck(int passenger)
{
    if((*ptr).passenger[passenger]==1)
    {
        return 1;
    }
    return 0;

}
//to check seatbelts are fastened or not
int seatbeltCheck(int passenger)
{
    if((*ptr).seatbelts[passenger]==1)
    {
        return 1;
    }
    return 0;
}
//function to activate airbags
void activateAirbag(int collision)
{

    if(passengerCheck(0) && seatbeltCheck(0) && collision==1)
    {
        printf("Driver Airbag activated.\n");
    }
    else
    {
        printf("Driver Airbag not activated.\n");
    }

     if(passengerCheck(1) && seatbeltCheck(1) && collision==1)
    {
        printf("Co.Driver Airbag activated.\n");
    }
    else
    {
        printf("Co.Driver Airbag not activated.\n");
    }

     if(passengerCheck(2) && seatbeltCheck(2) && collision==1)
    {
        printf("Passenger Airbag activated.\n");
    }
    else
    {
        printf("Passenger Airbag not activated.\n");
    }

}