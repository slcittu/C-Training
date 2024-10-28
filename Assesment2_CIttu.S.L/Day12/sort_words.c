/*
Program header 
1.Objective: Write C code to sort words in string alphabetically
            Consider only 1 character for sorting
            Store sorted words in buffer.
            Also store total number of words sorted.
2.Revisions: Nil
3.Date & time of revision :16/10/24
4.Author Name: Cittu S L
*/


#include <stdio.h>
#include <string.h>

void main()
{
    char str[100]="Quest is a quite place to work";
    char buffer[100];
    char words[20][20];
    int count = 0;
    char temp[20];
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (words[i][0] > words[j][0])
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
        {
            strcat(buffer, ",");
        }
        strcat(buffer, words[i]);
    }

    printf("Sorted output: %s\n", buffer);
    printf("Total number of words: %d\n", count);
}