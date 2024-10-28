//function to  concatenate 2 strings
void stringConcatenate(char dest[],char source[])
{
    int index1=0,index2=0;
    while(dest[index1]!='\0')
    {
        index1++;
    }

    while(source[index2]!='\0')
    {
        dest[index1++]=source[index2++];
    }

    dest[index1]='\0';
}


//function to copy 2 strings
void stringCopy(char *dest,char * src)
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }

    *dest='\0';
}

//FUNCTON strpbrk

void strpbrk_nonlib(char *target,char *key_str)
{
    int count[122]={0};

    char *target_ptr,*key_ptr;

    for(key_ptr=key_str;*key_ptr!='\0';key_ptr++)
    {
        for(target_ptr=target;*target_ptr!='\0';target_ptr++)
        {
            if(*target_ptr==*key_ptr)
            {
                count[(int)*key_ptr]++;
            }
        }
    }
    for(key_ptr=key_str;*key_ptr!='\0';key_ptr++)
    {
        printf("Character '%c' - Count : %d\n",*key_ptr,count[(int)*key_ptr]);
    }
}

//function to sort characters in a word

void sortChars(char* word) {
    int len=strlen(word),index1,index2;
    char temp;
    for(index1=0;index1<len-1;index1++) 
    {
        for(index2=index1+1;index2<len;index2++) 
        {
            if(word[index1]>word[index2]) 
            {
                temp=word[index1];
                word[index1]=word[index2];
                word[index2]=temp;
            }
        }
    }
}

//function to sort words in a string


void sortWords(char* str) 
{

    char words[100][50],temp[50];
    int wordCount=0;
    int index1=0,index2=0;

    while (str[index1]!='\0') 
    {
        if(str[index1]!=' ') 
        {
            words[wordCount][index2++]=str[index1];
        } 
        else if(index2>0) 
        {  
            words[wordCount][index2]='\0';
            wordCount++;
            index2=0;
        }
        index1++;
    }
    if (index2>0) 
    { 
        words[wordCount][index2]='\0';
        wordCount++;
    }
    for(index1=0;index1<wordCount;index1++) 
    {
        sortChars(words[index1]);
    }

    for(index1=0;index1<wordCount-1;index1++) 
    {
        for(index2=index1+1;index2<wordCount;index2++) 
        {
            if (strcmp(words[index1], words[index2])>0) 
            {
                strcpy(temp,words[index1]);
                strcpy(words[index1],words[index2]);
                strcpy(words[index2],temp);
            }
        }
    }
    for (index1=0;index1<wordCount;index1++) 
    {
        printf("%s ",words[index1]);
    }
}