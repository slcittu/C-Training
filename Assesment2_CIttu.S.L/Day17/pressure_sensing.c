/*
Program header 
1.Objective: Write c code fro pressure sensing
            (100psi of pressure generates 5 volts)
            - Range of sensor is 0-10v output for 0-200psi input
            - Pressure is user input with otion to enter in psi or bar.
              Both unit values to be stored in structure by converting to other.
              Then calculate the voltage generated by sensor.
2.Revisions: Nil
3.Date & time of revision :23/10/24
4.Author Name: Cittu S L
*/


#include<stdio.h>
#define bartopsiconst 14.5038
struct pressureSensor
{
    float pressurePsi;
    float pressureBar;
    float voltage;
};

struct pressureSensor *input(struct pressureSensor *pressure);
struct pressureSensor *convert(struct pressureSensor *pressure);
struct pressureSensor *findVoltage(struct pressureSensor *pressure);
struct pressureSensor *output(struct pressureSensor *pressure);

void main()
{
    struct pressureSensor *pressure;
    pressure->pressureBar=0;
    pressure->pressurePsi=0;
    int choice=1;
    while(choice==1)
    {

        pressure=input(pressure);
        pressure=convert(pressure);
        pressure=findVoltage(pressure);
        pressure=output(pressure);

        printf("Do ypu want to continue checking pressure? (Yes-1/ NO-0)");
        scanf("%d",&choice);
    }
}


struct pressureSensor *input(struct pressureSensor *pressure)
{
    int choice;
    printf("Enter Pressure value:\n1.In psi\n2.In bar\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter pressure in psi: ");
        scanf("%f",&pressure->pressurePsi);
    }
    else if(choice==2)
    {
        printf("Enter pressure in bar: ");
        scanf("%f",&pressure->pressureBar);
    }
    else
    {
        printf("Invalid choice!! Please chose 1 or 2\n");
        return pressure;
    }
    return pressure;
}
struct pressureSensor *convert(struct pressureSensor *pressure)
{
    if(pressure->pressureBar>0)
    {
        pressure->pressurePsi=pressure->pressureBar*bartopsiconst;
    }
    return pressure;
}
struct pressureSensor *findVoltage(struct pressureSensor *pressure)
{
    if(pressure->pressurePsi<0)
    {
        pressure->voltage=0;
    }
    else if(pressure->pressurePsi>200)
    {
        printf("Warning! Presuure exceeds the maximum limit. Volatage limited to 10 V.\n");
        pressure->voltage=10;
    }
    else
    {
        pressure->voltage=(pressure->pressurePsi/100)*5;
    }
    return pressure;
}
struct pressureSensor *output(struct pressureSensor *pressure)
{
    printf("Pressure in psi: %.2f psi\n",pressure->pressurePsi);
    printf("Volatage generated: %.2f V\n",pressure->voltage);
}