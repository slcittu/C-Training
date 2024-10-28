#include<stdio.h>

struct theatre
{
    int total_seats;
    int occupied_seats;
    int available_seats;
};

void main()
{
    struct theatre t1;

    printf("Enter the total capacity of the theatre: ");
    scanf("%d",&t1.total_seats);

    printf("Enter the no.of seats reserved:");
    scanf("%d",&t1.occupied_seats);

    if(t1.occupied_seats>t1.total_seats)
    {
        printf("Error!! More seats reserved than the total capacity.\n");
    }
    else if(t1.occupied_seats==t1.total_seats)
    {
        printf("The theatre is fully occupied. No more seats available.\n");
    }
    else
    {
        t1.available_seats=t1.total_seats-t1.occupied_seats;
        printf("Remaining Seats: %d",t1.available_seats);
    }
}