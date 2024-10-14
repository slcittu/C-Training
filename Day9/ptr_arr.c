/*
Program header 
1.Objective: Write a code to implement a pointer array
2.Revisions: Nil
3.Date & time of revision :11/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>

void main()
{
    int arr[2][2] = {{1,2},{3,4}};
    printf("%X \n",*arr);
    printf("%X \n",*(arr+1));
    printf("%d \n",*(*(arr+1)+1));
    printf("%d \n",*(*(arr+0)+0));
    printf("%X \n",arr+1);

}