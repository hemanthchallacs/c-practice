#include<stdio.h>
int main()
{
    
    FILE *fptr = fopen("fputsdemocontent.txt","w+");
    if(fptr == NULL)
    {
        printf("Couldn't open the file");
    }
    
    char carr[100];
    fputs("one ",fptr);
    fputs("helloworld ",fptr);
    fputs("newworld", fptr);
    fseek(fptr, 0,SEEK_SET);
    fputs("bb", fptr);



    fclose(fptr);
    return 0;

}