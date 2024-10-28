#include <stdio.h>

void main() 
{
    char str[50]; 
    int i;
    printf("enter the string:");
    gets(str);
    for (i=0; str[i]!='\0';i++) 
    {
        if(str[i]=='a'||str[i]=='e'||str[i] =='i'||str[i]=='o'||str[i]=='u') 
        {
            str[i] -= 32;
        } 
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
        {
            str[i]+=32;
        }
    }
    printf("Converted string: %s\n",str);

}
