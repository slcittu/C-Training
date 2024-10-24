/*
Program header 
1.Objective: Write code to update the status of battery system
            - Voltage level
            - Discharge rate
            - if voltage level falls below threshold print message to charge.
            - if 24 is max voltage then threshold = 6 volts (25%)
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

void main()
{
    float voltage,discharge;
    struct batterySystem* battery;

    printf("Enter the current battery voltage(V):");
    scanf("%f",&voltage);

    printf("Enter the current discharge voltage(V): ");
    scanf("%f",&discharge);
    battery=input(battery,voltage,discharge);

    battery=update(battery);

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
