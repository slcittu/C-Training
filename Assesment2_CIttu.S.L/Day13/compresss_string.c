//code to compress  A STRING
#include <stdio.h>
#include <string.h>
void compressString(char* input, char* output) 
{
    int len=strlen(input);
    int index1,index2=0,index3,count;
    char temp[10];

    for (index1=0;index1<len;index1++) 
    {
        output[index2++]=input[index1];
        count=1;

        while (index1+1<len&&input[index1]==input[index1+1]) 
        {
            count++;
            index1++;
        }
        if (count > 1) 
        {
            sprintf(temp,"%d",count);
            for (int index3=0;temp[index3]!='\0';index3++) 
            {
                output[index2++]=temp[index3];
            }
        }
    }
    output[index2] = '\0';


    if (strlen(output)>= len) 
    {
        strcpy(output, input);
    }
}

void main() 
{
    char input[100],output[100];
    printf("Enter a string: ");
    scanf("%s",input);

    compressString(input,output);
    printf("Compressed string: %s\n",output);
}
