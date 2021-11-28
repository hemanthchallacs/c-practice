#include<stdio.h>
int main()
{
    
    FILE *fptr = fopen("content.txt","r");
    if(fptr == NULL)
    {
        printf("Couldn't open the file");
    }
    
    char carr[100];

    while(  fscanf(fptr,"%[^\n]",carr)!=EOF){
 printf("%s\n", carr);
    }
       



    fclose(fptr);
    return 0;

}