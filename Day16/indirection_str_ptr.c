/*
Program header 
1.Objective: Write C code to  access structure member using indirection method, create a structure for stock inventory for sensors such as temp,humidity,accelerometer,gyroscope
2.Revisions: Nil
3.Date & time of revision :22/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

struct stock_inventory
{
    int temp;
    int humidity;
    int accelerometer;
    int gyroscope;
};

void main()
{
    struct stock_inventory st1;
    struct stock_inventory *ptr;
    ptr = &st1;
    st1.temp = 28;
    st1.humidity = 40;
    st1.accelerometer = 60;
    st1.gyroscope = 110;
    printf("Temperatur: %d\nHumidity: %d\nAccelerometer: %d\nGyroscope: %d\n",(*ptr).temp,(*ptr).humidity,(*ptr).accelerometer,(*ptr).gyroscope);
}