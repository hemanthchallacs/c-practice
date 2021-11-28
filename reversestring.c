#include<stdio.h>
void change(char str[] , int k);
int main()
{

    char str[] ="hello";

    char str2[5];

    int i = 0, j = 4;
    while(i<=j)
    {
       str2[i] = str[i];
       i++;
       
    }
    str2[5] = '\0';
    printf("%s", str2);
    change(str2, 2);
        printf("%s", str2);

    printf("\n%ld", sizeof(str));

    return 0 ;
}

void change (char str[] , int k)
{
    str[k] = '\0';
}