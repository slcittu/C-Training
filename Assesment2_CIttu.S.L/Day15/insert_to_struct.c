/*
Program header 
1.Objective: Write a function to insert structure element at given position
            - Position is user input
            - Limit max no.of eelements to 5
            - If already 5 elements are in array then print message that array is full. cannot insert or add elements

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
int count=0;

int unique(int);
void display(int);
//void addVehicle();
void deleteVehicle();
void insertVehicle();

void main()
{
    int id,choice;
    char ch='y';
    while(ch=='y'|| ch=='Y')
    {
        printf("---Vehicle Details---\n");
        printf("1. Insert Vehicle details at a given poistion.\n");
        printf("2. Display no.of entries in the list\n");
        printf("3. Search vehicle basd on ID\n");
        printf("4. Delete vehicle details\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    insertVehicle();
                    break;
            case 2:
                    printf("No.of vehicles in the list:%d\n",count);
                    break;
            case 3:
                    if(count==0)
                    {
                        printf("Sorry!\nNo vehicles in the list!\n");
                        break;
                    }
                    printf("Enter the Unique ID to display vehicle details: ");
                    scanf("%d",&id);
                    display(id);
                    break;
            case 4:
                    deleteVehicle();
                    break;
            default:
                    printf("INVALID CHOICE!!! \nTry Again...");
        }
        printf("Do you want to continue(Yes/No):");
        scanf(" %c",&ch);
    }
}

//checking for Unique Vehicle IDs
int unique(int id)
{
    int index1;
    for(index1=0;index1<5;index1++)
    {
    
        if(v[index1].vehicle_id==id)
        {
            return 0;
        }
    }
    return 1;
} 

//display vehicle details for id entered
void display(int id)
{
    int flag=0,index;

    for(index=0;index<5;index++)
    {
        if(v[index].vehicle_id==id)
        {
        printf("Vehicle ID: %d,",v[index].vehicle_id);
        printf("Model:%s,",v[index].model);
        printf("Fuel tank capacity:%d\n",v[index].fuel_tank);
        printf("Engine capacity: %d,",v[index].egine_capacity);
        printf("Seating Capacity:%d\n\n",v[index].seating);

        flag=1;
        break;
        }
    }

    if(!flag)
    {
        printf("ERROR!! Vehicle ID not found!");
    }
}

//to delete vehicle details from the list
void deleteVehicle()
{
    if(count==0)
    {
        printf("Error!!! No vehicle details to delete...\n");
        return;
    }

    int id,index=-1,i;
    printf("Enter vehicle ID to delete: ");
    scanf("%d",&id);

    for(i=0;i<5;i++)
    {
        if(v[i].vehicle_id==id)
        {
            v[i].vehicle_id=0;
            index=i;
        }
    }
    
    if(index==-1)
    {
        printf("Error: Vehicle ID not found in the list..\n");
        return;
    }
    count--;
    printf("Vehicle with ID%d deleted successfully.\n",id);
}
//insert vehicle details at given position
void insertVehicle()
{
    char ch;
    if(count>=5)
    {
        printf("Error!!! List is full. Cannot insert anymore vehicle details...\n");
    }

    int pos,uniq;

    printf("Enter the position to insert the vehicle details(1-5):");
    scanf("%d",&pos);

    if(pos<1||pos>5)
    {
        printf("Invalid position! Please enter a position between 1 and 5");
        return;
    }
    pos--;
    if(v[pos].vehicle_id!=0)
    {
        printf("Warning!!!Position %d already exists! You want to override here(Yes/No)...\n",pos+1);
        scanf(" %c",&ch);
        if(!(ch=='y'||ch=='Y'))
        {
            return;
        }
    }
    printf("Enter details of vehicle for position %d\n",pos+1);
    printf("Enter vehicle model: ");
    scanf("%s",v[pos].model);

    while(1)
    {
        printf("Enter unique vehicle ID: ");
        scanf("%d",&uniq);

        if(unique(uniq))
        {
            v[pos].vehicle_id=uniq;
            break;
        }
        else
        {
            printf("Error!!!\n Vehicle ID Already exists! Please enter a unique ID\n");
        }
    }

        printf("Enter fuel capacity:");
        scanf("%d",&v[pos].fuel_tank);
        printf("Enter engine capacity:");
        scanf("%d",&v[pos].egine_capacity);
        printf("Enter seating capacity:");
        scanf("%d",&v[pos].seating);

        count++;
}
