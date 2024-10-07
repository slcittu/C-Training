/*
Program header 
1.Objective : Generate a randum number less than 25 and user has to guess the random number to exit
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int rand_num=rand()%25;
    int guess,
    if(rand_num<25)
    {
        while (1)
        {
            printf("Guess the number les than 25:");
            scanf("%d",&guess);
            if(guess==rand_num)
            {
                printf("Predicted Right!!");
                break;
            }
            printf("Wrong Guess!! Guess again..\n");
        }
        
    }
    
}