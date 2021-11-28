#include<stdio.h>
static inline int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int c = sum(1,3);
    printf("%d",c);
    return 0;
}