#include <stdio.h>

void main()
{
    int day;

    printf("Enter a Day: \n 1.Sunday\n 2.Monday \n 3.Tuesday\n 4.Wednesday ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("Sundayn");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        default:
            printf("INVALID!!");
            break;
    }
}