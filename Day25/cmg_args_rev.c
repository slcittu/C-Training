/*
Program header 
1.Objective: Write code to implement command line args
            if argc > 1
            Then print all arguments in reverse order.

2.Revisions: Nil
3.Date & time of revision :05/11/24
4.Author Name: Cittu S L
*/


#include<stdio.h>

void main(int argc, char *argv[])
{
    int lc=0;
    if(argc==1)
    {
        printf("No command line arguments.\n");
    }
    else
    {   
        for(lc=argc-1;lc>=1;lc--)
        {
            printf("%s \n",argv[lc]);
        }
    }
    
}
