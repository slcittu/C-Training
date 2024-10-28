/*
Program header 
1.Objective: Write a c program to capture vehicle specifications and sort the vehicle based on its engine capacity
            i) Vehicle model
            ii)Fuel tank capacity
            iii)Engine capacity
            iv)Seating capacity
            v)Vehicle ID (Should be unique)
    Addon question 1: List all unique IDs entered and allow user to select among them. Then display data of that vehicle
    Addon question 2: Write function to add new vehicle data to the list.
                    Opening Menu.
                    1. Add new vehicle details
                    2.Display number of entries in list
                    3.Search vehicle based on ID
                    4.Delete vehicle details.


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
}v[10];
int count=0;

//void swap(int,int);
//void sort();
//void input();
//void displayUnique();
int unique(int,int);
void display(int);
void addVehicle();
void deleteVehicle();

void main()
{
    int id,choice;
    char ch='y';
    while(ch=='y'|| ch=='Y')
    {
        printf("---Vehicle Details---\n");
        printf("1. Add new vehicle data\n");
        printf("2. Display no.of entries in the list\n");
        printf("3. Search vehicle basd on ID\n");
        printf("4. Delete vehicle details\n");
        printf("Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    addVehicle();
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
// adding vehicle details to the list
void addVehicle()
{
    if(count>=10)
    {
        printf("Error!!! Cannot add more vehicles.List full!!!\n");
        return;
    }

    int uniq;
    printf("\nEnter details of vehicle %d\n",count+1);
    printf("Enter vehicle model: ");
    scanf("%s",v[count].model);

    while(1)
    {
        printf("Enter unique vehicle ID: ");
        scanf("%d",&uniq);

        if(unique(uniq,count))
        {
            v[count].vehicle_id=uniq;
            break;
        }
        else
        {
            printf("Error!!!\n Vehicle ID Already exists! Please enter a unique ID\n");
        }
    }

        printf("Enter fuel capacity:");
        scanf("%d",&v[count].fuel_tank);
        printf("Enter engine capacity:");
        scanf("%d",&v[count].egine_capacity);
        printf("Enter seating capacity:");
        scanf("%d",&v[count].seating);

        count++;
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

    for(i=0;i<count;i++)
    {
        if(v[i].vehicle_id==id)
        {
            index=i;
        }
    }
    
    if(index==-1)
    {
        printf("Error: Vehicle ID not found in the list..\n");
        return;
    }

    for(i=index;i<count-1;i++)
    {
        v[i]=v[i+1];
    }

    count--;
    printf("Vehicle with ID%d deleted successfully.\n",id);
}

//swapping the structures
// void swap(int a,int b)
// {
//     struct vehicle temp;
//     temp=v[a];
//     v[a]=v[b];
//     v[b]=temp;
// }
//Bubble Sort
// void sort()
// {
//     int index1,index2;
//     for(index1=0;index1<5;index1++)
//     {
//         for(index2=0;index2<5-index1-1;index2++)
//         {
//             if(v[index2].egine_capacity>v[index2+1].egine_capacity)
//             {
//                 swap(index2,index2+1);
//             }
//         }
//     }
// }
// //taking vehicle details
// void input()
// {
//     int index,uniq;
//     printf("Enter 5 vehicle details:\n");
//     for(index=0;index<5;index++)
//     {
//         printf("Enter details of vehicle %d\n",index+1);
//         printf("ENter vehicle model:");
//         scanf("%s",v[index].model);
//         while(1)
//         {
//                 printf("Enter unique vehicle id:"); 
//                 scanf("%d",&uniq);

//                 if(unique(uniq,index))
//                 {
//                     v[index].vehicle_id=uniq;
//                     break;
//                 }
//                 else
//                 {
//                     printf("Error!!!\n Vehicle ID Already exists! Please enter a unique ID\n");
//                 }
//         }
//         printf("Enter fuel capacity:");
//         scanf("%d",&v[index].fuel_tank);
//         printf("Enter engine capacity:");
//         scanf("%d",&v[index].egine_capacity);
//         printf("Enter seating capacity:");
//         scanf("%d",&v[index].seating);
//     }

// }
//Displayig vehicle details
// void displayUnique()
// {
//     int index;
//     printf("\nUNIQUE IDs:\n");
//     printf("-------------\n");
//     for(index=0;index<5;index++)
//     {
//         printf("Vehicle ID: %d\n",v[index].vehicle_id);
//     }
// }