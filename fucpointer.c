#include<stdio.h>
int sum(int, int);
int (*func2)(int , int);
int someotherfunction(int(*)(int,int),int, int);
int main()
{
    int (*func)(int , int ) = &sum;
    int c = func(2,8);
    func2 = &sum;

    c = someotherfunction(func2, 99,1);
    printf("\n%d", c);
    return 0;
}

int someotherfunction(int (*func2)(int, int) , int a, int b)
{
        return func2(a,b);
}

int sum(int a, int b)
{
    return a+b;
}