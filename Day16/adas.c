/*
Program header 
1.Objective: Write code to capture and display information about ADAS.
            1. Adaptive cruise control
                (Checking distance from front vehicle-5m gap between vehicles
                Reduce Speed accordingly)
            2. Parking Assistance
                (Vehicle nearby on your leftside or rightside)
            3.Cross traffic alert
            4. Driver monitoring
2.Revisions: Nil
3.Date & time of revision :22/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>
//structure to implment ADAS
struct ADAS
{
    int speed;
    int distanceToFront;
    int distanceToLeft;
    int distanceToRight;
    int parkAssist;
    int driverSmoking;
    int driverSleeping;
    int driverDrunk;
    int ignition;
}adas,*ptr;

void inputADAS();
void adaptiveCruiseControl();
void parkingAssistance();
void crossTrafficAlert();
void driverMonitoring();
void leftRightDistance();
int main()
{
    ptr=&adas;
    while(1)
    {
        ptr->ignition=1;
        printf("Press 0 to turn off ignition(1 to turn ON):");
        scanf(" %d",&ptr->ignition);

        if(ptr->ignition==0)
        {
            printf("Ignition is OFF. ADAS functions disabled!!!\n");
            break;
        }
        inputADAS();
        adaptiveCruiseControl();
        parkingAssistance();
        crossTrafficAlert();
        driverMonitoring();
        
    }
   return 0;
}
//taking inputs for ADAS
void inputADAS()
{
    printf("Enter vehicle speed(km/h): ");
    scanf("%d",&ptr->speed);
}
//function to work adaptive cruise control
void adaptiveCruiseControl()
{
    printf("Enter distance from the front vehicle(meters): ");
    scanf("%d",&ptr->distanceToFront);
    
    int safe_distance=ptr->speed/10;
        while(ptr->distanceToFront<safe_distance && ptr->speed>0)
        {
            printf("Warning!! Reducing the speed. You are moving closer to the vehicle infront.\n ");
            ptr->speed-=10;
            safe_distance=ptr->speed/10;
            printf("Updated vehicle speed: %d kmph\n",ptr->speed);

            printf("Enter distance from the front vehicle(meters): ");
            scanf("%d",&ptr->distanceToFront);
            if(ptr->speed<=0)
            {
                printf("Vehicle Stopped to avoid collision.\n");
                break;
            }
        }
        printf("Safe Distance maintained.\n");
}     
        

//function to turn on parking assistance
void parkingAssistance()
{
    printf("Do you want to turn ON Parking Assistance? (Yes-1/No-0): ");
    scanf("%d",&ptr->parkAssist);
    
    if(ptr->parkAssist)
    {
        printf("Parking Assistance enabled.\n");
        leftRightDistance();
       
        if(ptr->distanceToLeft<5)
        {
            printf("Warning!! Don't move towards left. Obstacle found\n");
        }
        else if(ptr->distanceToRight<5)
        {
            printf("Warning!! Don't move towards right. Obstacle found\n");
        }
        else
        {
            printf("Safe to move. Check side mirrors for more safety.\n");
        }
    }
    
}

//function to get alert for cross traffic
void crossTrafficAlert()
{
    leftRightDistance();
    if(ptr->distanceToLeft<5)
    {
        printf("Warning!! Vehicle detected on the left. Turning Right\n");
    }
    else if(ptr->distanceToRight<5)
    {
        printf("Warning!! Vehicle detected on the right. Turning Left\n");
    }
    else
    {
        printf("You are driving safely. Safe Drive.\n");
    }
}

//function to monitor the driver's condition
void driverMonitoring()
{
    printf("Is the driver smoking? (Yes-1/No-0): ");
    scanf("%d",&ptr->driverSmoking);

    printf("IS the driver sleping? (Yes-1/No-0): ");
    scanf("%d",&ptr->driverSleeping);

    printf("Is the driver drunk? (Yes-1/No-0): ");
    scanf("%d",&ptr->driverDrunk);

    if(ptr->driverDrunk|| ptr->driverSleeping || ptr->driverSmoking)
    {
        printf("Danger!! Driver condition is not safe for driving.\n");
        printf("Stopping Vehicle!!\n");
        ptr->ignition=0;
    }
    else
    {
        printf("You are driving safely. Safe Ride.\n");
    }
}

void leftRightDistance()
{
     printf("Enter distance to left (cm): ");
        scanf("%d",&ptr->distanceToLeft);

        printf("Enter distance to Right (cm): ");
        scanf("%d",&ptr->distanceToRight);
}
