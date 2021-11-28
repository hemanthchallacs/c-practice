#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mystrcmp(char *, char *, int);
int main()
{
    FILE *fp = fopen("content.txt", "r");
    if(fp == NULL)
    {
        printf("\n[ERROR] Unable to open the file");
        exit(1);
    }
    else
    {
        printf("\n[INFO] Abled to open the file");
        printf("\n[INFO] file contents: start\n");
        char word[20];
        char *key = "helloworld";
        char c;
        int i =0;
        int flag = 0;
        while( (c = fgetc(fp)) != EOF)
        {
            printf("\n%c", c);
            if(c == ' ' )
            {
                word[i] = '\0';
                printf("\n-->%s", word);
                int length = i;
                i=0;
                int k =0;

                if(mystrcmp(word, key, length) == 0)
                flag = 1;
                if(flag == 1)
                {
                    // word[0] = 'p';
                    // key[0] = 'p';
                    printf("\n[INFO] KEY FOUND: %s", word);
                    FILE *fp2 = fopen("content2.txt", "w+");
                    // fprintf(fp2,"%s", word);
                    fputs(word, fp2);
                    fclose(fp2);
                }
            }
            else{
                flag = 0;
                word[i++] = c;
                
                
           
            }
        }
        printf("\n[INFO] file contents: end\n");
        fclose(fp);
    }
    return 0;
}

int mystrcmp(char *a, char *b, int len)
{
    int i =0;
    while(i<len+1)
    {
        if(a[i] != b[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}