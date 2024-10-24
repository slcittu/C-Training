/*
Program header 
1.Objective: Write code to implemenet ABS (Anti-Lock Braking System)
            -Pass and return structure from function as pointer
            - Capture ad modify data in functions
            - Create separate function to print the data.
            - Implementation of ABS:
                - Capture 2 or 4 sensor data
                - Capture speed parameter of vehicle
                - Capture angular velocity(RPM) 
                - Decelerate the wheels to match speed of vehicle
            - Write function to calculate linear diistance travelled by wheel based on RPM
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

#define PI 3.14
#define mpstokmph 3.6
#define rpmtolinearconst 60
struct ABS
{
    int speed;
    int wheelRPM[4];
    float wheelSpeed[4];
    int radius;
};
struct ABS *angularToLinear(struct ABS * abs); 
struct ABS *captureData(struct ABS *abs);
struct ABS *applyABS(struct ABS *abs);
void main()
{
    struct ABS abs;
    int choice=1;
    while(choice)
    {
        captureData(&abs);
        angularToLinear(&abs);
        applyABS(&abs);

        printf("Do you want to turn OFF the vehicle (Press 0 / 1 to continue driving): ");
        scanf("%d",&choice);
    }
}

//function to capture data
struct ABS *captureData(struct ABS *abs)
{
    printf("Enter vehicle speed(km/h): ");
    scanf("%d",&abs->speed);

    printf("Enter wheel radius(in cms): ");
    scanf("%d",&abs->radius);

    for(int i=0;i<4;i++)
    {
        printf("Enter RPM of wheel %d: ",i+1);
        scanf("%d",&abs->wheelRPM[i]);
    }

    return abs;
}
//function to apply abs on each wheel to stop the vehicle
struct ABS *applyABS(struct ABS *abs)
{
    for(int i=0;i<4;i++)
    {
        while(abs->wheelSpeed[i]!=abs->speed)
        {
            printf("ABS kicked in..\n");
            if(abs->wheelSpeed[i]<abs->speed)
            {
                printf("Wheel %d is skidding!! Accelerating...\n",i+1);
                abs->wheelSpeed[i]+=10.0;
                printf("Updated Wheel %d's speed: %.2f km/h\n",i+1,abs->wheelSpeed[i]);
            }
            if(abs->wheelSpeed[i]>abs->speed)
            {
                abs->wheelSpeed[i]=abs->speed;
                printf("Wheel Speed is calibrated to vehicle speed.\n");
            }
        }
    }
    printf("Wheel speed has matched with speed of vehicle. Stopping gradually...\n");

    return abs;
}
//to convert angular velocity to linear velocity
struct ABS *angularToLinear(struct ABS *abs)
{
    float radiusInMeter=abs->radius/100.0;
    printf("Radius in Meter: %.2f\n",radiusInMeter);
    float linearSpeed;
    for(int i=0;i<4;i++)
    {
        linearSpeed=(float)(abs->wheelRPM[i]*2*PI*radiusInMeter)/rpmtolinearconst;//linear velocity in mps
        abs->wheelSpeed[i]=linearSpeed*mpstokmph;//in kmph
        
    }
    // printf("Wheel Speed:%.2f\n",abs->wheelSpeed[0]);
    // printf("Linear Speed: %.2f\n",linearSpeed);

    return abs;
}