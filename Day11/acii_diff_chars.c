/*
Program header 
1.Objective: Write a code to print difference of ASCII value of a charactr in case of different strings.
                -str1-"abc"
                -str2="abC"
                diff=ASCII(c)-ASCII(C)
                print-> diff
2.Revisions: Nil
3.Date & time of revision :15/10/24
4.Author Name: Cittu S L
*/

#include<stdio.h>
#include<math.h>

int stringCompare(char str1[],char str2[]);
int asciiDifference(char str1[],char str2[]);
void main()
{
    char str1[]="abc";
    char str2[]="ABC";

    int var=0,diff=0;
    var=stringCompare(str1,str2);
    diff=asciiDifference(str1,str2);

    printf("\nThe comparison output is %d",var);
    printf("\nThe difference of ASCII Values is %d",abs(diff));

}


int stringCompare(char str1[],char str2[])
{
    int index=0,var=0;
     while(str1[index]!='\0' && str2[index]!='\0')
    {
        if(str1[index]!=str2[index])
        {
            if(str1[index]>str2[index])
            {
                var=1;
            }
            else
            {
                var=-1;
            }
            break;
        }
        index++;
    }
    if(var==0 &&(str1[index]!='\0'||str2[index]!='\0'))
    {
        if(str1[index]!='\0')
        {
            var=1;
        }
        else{
            var=-1;
        }
    }

    return var;
    
}

int asciiDifference(char str1[],char str2[])
{
    int index=0,diff=0;

    while(str1[index]!='\0' && str2[index]!='\0')
    {
        if(str1[index]!=str2[index])
        {
            diff+=str1[index]-str2[index];
           // break;
        }
        index++;
    }

    return diff;
    
}
