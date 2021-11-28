#include<stdio.h>

static int a;
int dummy()
{
    a=99;
    printf("in dummy: %d\n",a);
    return 0;
}