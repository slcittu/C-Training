/*
Program header 
1.Objective: Write a c program to capture vehicle specifications and sort the vehicle based on its engine capacity
            i) Vehicle model
            ii)Fuel tank capacity
            iii)Engine capacity
            iv)Seating capacity
            v)Vehicle ID (Should be unique)

            Use any sorting algorithms discussed
2.Revisions: Nil
3.Date & time of revision :21/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<string.h>

struct vehicle
{
    char model[10];
    int fuel_tank;
    int egine_capacity;
    int seating;
    int vehicle_id;
}v[5];

void swap(int,int);
void sort();
void input();
void display();
int unique(int,int);

void main()
{
    
    input();
    sort();
    display();
}
//swapping the structures
void swap(int a,int b)
{
    struct vehicle temp;
    temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}
//Bubble Sort
void sort()
{
    int index1,index2;
    for(index1=0;index1<5;index1++)
    {
        for(index2=0;index2<5-index1-1;index2++)
        {
            if(v[index2].egine_capacity>v[index2+1].egine_capacity)
            {
                swap(index2,index2+1);
            }
        }
    }
}
//taking vehicle details
void input()
{
    int index,uniq;
    printf("Enter 5 vehicle details:\n");
    for(index=0;index<5;index++)
    {
        printf("Enter details of vehicle %d\n",index+1);
        printf("ENter vehicle model:");
        scanf("%s",v[index].model);
        while(1)
        {
                printf("Enter unique vehicle id:"); 
                scanf("%d",&uniq);

                if(unique(uniq,index))
                {
                    v[index].vehicle_id=uniq;
                    break;
                }
                else
                {
                    printf("Error!!!\n Vehicle ID Already exists! Please enter a unique ID\n");
                }
        }
        printf("Enter fuel capacity:");
        scanf("%d",&v[index].fuel_tank);
        printf("Enter engine capacity:");
        scanf("%d",&v[index].egine_capacity);
        printf("Enter seating capacity:");
        scanf("%d",&v[index].seating);
    }

}
//Displayig vehicle details
void display()
{
    int index;
    printf("\nVehicles listed by their engine capacity\n");
    printf("-----------------------------------------\n");
    for(index=0;index<5;index++)
    {
        printf("Vehicle ID: %d,",v[index].vehicle_id);
        printf("Model:%s,",v[index].model);
        printf("Fuel tank capacity:%d\n",v[index].fuel_tank);
        printf("Engine capacity: %d,",v[index].egine_capacity);
        printf("Seating Capacity:%d\n\n",v[index].seating);
    }
}
//checking Vehicle IDs are unique or not
int unique(int id,int currentIndex)
{
    int index1;
    for(index1=0;index1<currentIndex;index1++)
    {
     if(v[index1].vehicle_id==id)
            {
                return 0;
            }
    }
    return 1;
}