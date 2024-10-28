
/*
Program header 
1.Objective: Perform structure pack with '__attribute((pack))__' and #pragma pack(1)
2.Revisions: Nil
3.Date & time of revision :17/10/24
4.Author Name: Cittu S L
*/
#include<stdio.h>
#pragma pack(1)
struct my_struct
{
    int v1;
    char c2;
    int v2;
    char c1;
};
// }__attribute((packed))__;

void main()
{
    struct my_struct st1;

    printf("%d",sizeof(st1));
}