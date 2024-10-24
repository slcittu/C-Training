/*
Program header 
1.Objective: Write code to update the status of battery system
            1. - Voltage level
            - Discharge rate
            - if voltage level falls below threshold print message to charge.
            - if 24 is max voltage then threshold = 6 volts (25%)
            2. - Consider user input of voltage as current ststus of battery
                - Then calculate backup period in hours based on discharge rate
2.Revisions: Nil
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>


struct batterySystem
{
    float voltage;
    float dischargeRate;
};

struct batterySystem *input(struct batterySystem *battery,float voltage,float discharge);
struct batterySystem *update(struct batterySystem *battery);
struct batterySystem *backupTime(struct batterySystem *battery);
void main()
{
    float voltage,discharge;
    struct batterySystem* battery;
    int choice=1;
    while(choice==1)
    {
        printf("\nEnter the current battery voltage(V):");
        scanf("%f",&voltage);

        printf("\nEnter the current discharge voltage(V): ");
        scanf("%f",&discharge);

        battery=input(battery,voltage,discharge);

        battery=update(battery);
        battery=backupTime(battery);

        printf("Do ypu want to continue checking battery status? (Yes-1/ NO-0)");
        scanf("%d",&choice);
    }
    

}
struct batterySystem *input(struct batterySystem *battery,float voltage,float discharge)
{
    battery->voltage=voltage;
    battery->dischargeRate=discharge;

    return battery;
}

struct batterySystem *update(struct batterySystem *battery)
{
    const float threshold=6.0;

    printf("Current voltage level: %.2f\n",battery->voltage);
    printf("Discharge Rate: %.2f\n",battery->dischargeRate);

    if(battery->voltage<threshold)
    {
        printf("Warning!! Battery voltage is below 25%%!  Please charge\n ");
    }
    else
    {
        printf("Voltage above threshold.\n");
    }

    return battery;
}

struct batterySystem *backupTime(struct batterySystem *battery)
{
    const float threshold=6.0;
    float remaining=battery->voltage-threshold;
    float backup=remaining/battery->dischargeRate;
    int hours=(int)backup;
    int minutes=(int)((backup-hours)*60);

    if(remaining>0)
    {
        printf("The esitmated backup period is:%d hours %d minutes\n",hours,minutes);
    }
    else
    {
        printf("Battery voltage is too low.Please Charge the battery.\n");
    }
    return battery;
}