
//function to add 2 array elements
void arr_add(int mat1[],int mat2[])
{
    int index;
    static int count=1;
    int res[5];
    for(index=0;index<5;index++)
    {
        res[index] = mat1[index]+mat2[index];
    }
    printf("Array after addition = ");
    for(index=0;index<5;index++)
    {
        printf("%d\t",res[index]);
    }
    
    printf("\nValue of count = %d\n",count);
    printf("\n");
    count++;

}