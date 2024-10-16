/*
Program header 
1.Objective: Write code for following using double pointer
            i) Dereferenced value
            ii) Address of variables
            iii) Address of both pointers
            iv) Content of ptp
            v) Content of int_ptr
            vi) Print *ptp
2.Revisions: Nil
3.Date & time of revision :09/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>

void main()
{
    int var,*int_ptr;
    int **ptp;
    ptp=&int_ptr;
    var=10;
    int_ptr = &var;

    printf("Dereferenced Value of int_ptr  = %d \n",*int_ptr);
    printf("Dereferenced Value of ptp  = %d \n",**ptp);

    printf("Address of variable var is = %d \n",int_ptr);
    printf("Address of variable var is = %d \n",&var);

     printf("Address of pointer int_ptr is = %d \n",ptp);
     printf("Address of pointer ptp is = %d \n",&ptp);


     printf("Content of ptp is = %d\n",ptp);

     printf("Content of int_ptr is = %d\n",int_ptr);

     printf("Printing *ptp( content of int_ptr) is = %d",*ptp);
    
    return 0;
}


