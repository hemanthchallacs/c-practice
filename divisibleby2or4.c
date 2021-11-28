#include<stdio.h>

int main(int argc, char**argv)
{
    int n = 554;

    printf("%d %s %s", argc,argv[0], argv[1]);
    scanf("%d",&n);
        // printf("%d\n",n);

    if((n&1) == 0)
    
    {
        printf("divisible by 2");
        if((n&2) == 0)
        printf("divisible by 4");
    }

    unsigned int a = 1;
    char *c = (char*)&a;
    if(*c)
    {
        printf("little indian");
    }
    else
    printf("big indian");

}