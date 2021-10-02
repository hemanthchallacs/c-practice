#include<stdio.h>
#include<stdint.h>

int64_t add(int64_t,int64_t);
int64_t sub(int64_t,int64_t);

int main()
{
    const char *str = "static";
    printf("str: %p\n",str);
    printf("main: %p\n", main);
    int64_t (*function_pointer)(int64_t
    , int64_t);

    function_pointer = add;
    printf("%ld\n", function_pointer(1,2));
    function_pointer = sub;
    printf("%ld\n", function_pointer(1,2));
    return 0;

}

int64_t add(int64_t a, int64_t b)
{
    return a+b;

}

int64_t sub(int64_t a, int64_t b)
{
    return a-b;
}


