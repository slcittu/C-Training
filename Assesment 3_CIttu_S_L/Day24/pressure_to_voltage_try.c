
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

//function to take pressure as i/p from user
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

//function to convert pressure in bar to psi
struct pressureSensor *convert(struct pressureSensor *pressure)
{
    if(pressure->pressureBar>0)
    {
        pressure->pressurePsi=pressure->pressureBar*bartopsiconst;
    }
    return pressure;
}

//function to find voltage 
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

//function to display i/p pressure and output voltage
struct pressureSensor *output(struct pressureSensor *pressure)
{
    printf("Pressure in psi: %.2f psi\n",pressure->pressurePsi);
    printf("Volatage generated: %.2f V\n",pressure->voltage);
}