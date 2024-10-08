/*
Program header 
1.Objective :Write a code for Implementing Arrays
3.Date & time of revision :08/10/24
4.Author Name: Cittu S L
*/

#include <stdio.h>

void main()
{
    //Either size or elements are mandatory
    int arr[]={1,2,3,4,5};
    printf("%d \n",arr[1]);
    printf("%d \n",sizeof(arr));
    printf("%x \n", &arr[0]);
    printf("%x \n", &arr[1]);
    printf("%x \n", &arr[2]);

}