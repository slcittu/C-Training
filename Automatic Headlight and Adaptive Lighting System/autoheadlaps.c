#include <stdio.h>
#include <stdlib.h>

//define structure for taking sensor inputs
struct SensorData 
{
    int light_level;  //ambient light level(lux)
    int speed;   //Vehicle speed(km/h)
    int steering;  //Steering angle(-10 for left, 0 for center, +10 for right)
    int engine_status;  //Engine status(ON/OFF)
};

//define structure for updating headlight status
struct Headlights 
{
    int headlights;  //Headlights on/off
    int beam_intensity;  //Beam intensity level(1:low,2:medium,3:high)
    int beam_distance;  // Beam Distance(1:short,2:medium,3:long)
    int beam_direction;  //Beam direction(-1:left,0:center,1:right)
};

//function prototyping
struct SensorData *get_sensor_data();
struct Headlights *initialize_system();
void auto_headlight_activation(struct SensorData *data, struct Headlights *system);
void adaptive_beam_control(struct SensorData *data, struct Headlights *system);
void display_system_status(const struct Headlights *system);

int main() 
{
    struct SensorData *data=NULL;
    struct Headlights *system=NULL;

    data=(struct SensorData*)malloc(sizeof(struct SensorData));
    if(data==NULL) 
    {
        printf("Memory allocation failed !!\n");
        return 0;
    }

    printf("Enter engine status (1:ON,0:OFF): ");
    scanf("%d",&data->engine_status);

    if(data->engine_status!=1)
    {
        printf("Engine OFF! Auto Headlights system disabled.\n");
        free(data);  
        return 0;
    }

    while(data->engine_status==1)
    {
        data=get_sensor_data(); //taking user input for sensor data
        system=initialize_system();

        auto_headlight_activation(data,system); //turn headlights on/off
        adaptive_beam_control(data, system);  //adjust beam based on speed and steering inputs

        //display the system status only if headlights are ON
        display_system_status(system);

        free(data);
        free(system);
    }

    return 0;
}

// Function to take sensor data inputs from user
struct SensorData* get_sensor_data() 
{
    struct SensorData *data =(struct SensorData*)malloc(sizeof(struct SensorData));
    if (!data)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }

    
    printf("Enter ambient light level (lux): "); //1 lux is equal to 1 lm/m²(threshold 20)
    scanf("%d",&data->light_level);

    if (data->light_level<20) 
    {  
        //if light level is low, headlights will turn ON
        printf("Enter vehicle speed (km/h): ");
        scanf("%d",&data->speed);
        printf("Enter steering angle(-10 for left, 0 for center, +10 for right): ");
        scanf("%d",&data->steering);
    } 
    else
    {
        data->speed=0; 
        data->steering=0;
    }

    return data;
}

//function to initialize headlight system
struct Headlights* initialize_system() 
{
    struct Headlights *system=(struct Headlights*)malloc(sizeof(struct Headlights));
    if (!system) 
    {
        printf("Memory allocation failed !\n");
        return 0;
    }

    system->headlights=0; //headlights OFF by default
    system->beam_intensity=1; //low intensity by default
    system->beam_distance=1;  //Short beam by default
    system->beam_direction=0; //Centered by default

    return system;
}

//function to control headlight activation based on ambient light level
void auto_headlight_activation(struct SensorData *data,struct Headlights *system) 
{
    if(data->light_level<20) 
    {  
        //light threshold set to 20 lux
        system->headlights=1; //turn ON headlights
        printf("\nHeadlights are turned ON due to low ambient light.\n");
    } 
    else
    {
        printf("\nHeadlights are OFF due to sufficient ambient light.\n");
    }
}

//function to control beam intensity, Distance, and direction based on speed and steering inputs
void adaptive_beam_control(struct SensorData *data, struct Headlights *system) 
{
    if (system->headlights==1) //only adjust the beam if headlights are ON
    { 
        // Set beam intensity and Distance based on speed
        if (data->speed>=60) //high speed
        {          
            system->beam_intensity=3; // High intensity
            system->beam_distance=3;  // Long beam
        } 
        else if(data->speed>=30) //medium speed
        {    
            system->beam_intensity=2; // Medium intensity
            system->beam_distance=2;  // Medium beam
        } 
        else
        {
            system->beam_intensity=1; // Low intensity
            system->beam_distance=1;  // Short beam
        }

        // Adjust beam direction based on steering angle
        if(data->steering>0) 
        {
            system->beam_direction=1; // Right
        } 
        else if(data->steering<0) 
        {
            system->beam_direction=-1; // Left
        } 
        else 
        {
            system->beam_direction = 0; // Centered
        }
    }
}

//function to display the current status of the headlight system
void display_system_status(const struct Headlights *system) 
{
    printf("\n--- AUTO Headlight System ---\n");

    if(system->headlights==1) //display only if headlights are ON
    {  
        printf("Headlights: ON\n");

        // Display beam intensity
        switch(system->beam_intensity) 
        {
            case 1: 
                    printf("Beam Intensity: Low\n"); 
                    break;
            case 2: 
                    printf("Beam Intensity: Medium\n"); 
                    break;
            case 3: 
                    printf("Beam Intensity: High\n"); 
                    break;
            
        }

        // Display beam distance
        switch(system->beam_distance) 
        {
            case 1: 
                    printf("Beam Distance: Short\n"); 
                    break;
            case 2: 
                    printf("Beam Distance: Medium\n"); 
                    break;
            
            case 3: 
                    printf("Beam Distance: Long\n"); 
                    break;
        }

        // Display beam direction
        switch(system->beam_direction) 
        {
            case 1: 
                    printf("Beam Direction: Right\n"); 
                    break;
            case -1: 
                    printf("Beam Direction: Left\n"); 
                    break;
            case 0: 
                    printf("Beam Direction: Centered\n"); 
                    break;
        }
    } 
    else 
    {
        printf("Headlights: OFF\n");
    }
}
