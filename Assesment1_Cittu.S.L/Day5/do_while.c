/*
Program header 
1.Objective : do_while loop
 2.Revisions: Nil
3.Date & time of revision :07/10/24
4.Author Name: Cittu S L
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool condition= true;
    int val=5;
    do{
        printf("%d",val);
        val--;
    }while(val>0);
    return 0;
}