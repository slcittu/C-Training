//coding challenge

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car 
{
    char model[20];
    int year;
    float price;
};
void modifyPrice(struct Car *car, float price); 
void main() 
{
    struct Car c;

 
    printf("Enter car model: ");
    scanf("%s",c.model);

    printf("Enter car year: ");
    scanf("%d",&c.year);

    printf("Enter car price: ");
    scanf("%f",&c.price);

    printf("\nOriginal Price of %s (%d) car is Rs.%.2f\n",c.model,c.year,c.price);

    float newPrice;
    printf("Enter new price: ");
    scanf("%f",&newPrice);
    modifyPrice(&c,newPrice);

    printf("Updated Price of %s (%d) car is Rs.%.2f\n",c.model,c.year,c.price);

}

void modifyPrice(struct Car *c,float price) 
{
    c->price = price;
}