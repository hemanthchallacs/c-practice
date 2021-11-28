#include<stdio.h>

void func(int n)
{
    if(n==0)
        return;
    else
    {
        int a = 2;
        printf("%u\n", &a);
        func(n-1);
    }
}

int main()
{
    
    func(3);
    return 0;
}
