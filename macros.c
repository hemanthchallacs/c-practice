#include<stdio.h>
#define number 10
#define ASSIGN(x) (int*)malloc(x*sizeof(int))
void main()
{

    int *a = ASSIGN(5);
    int arr[5];
    int *p=NULL;
    p = a;
    printf("%ld\n", (p));
    printf("%ld\n", (p+5));
    printf("%ld\n", (arr));

    printf("%ld\n", (&arr));
    printf("%ld\n", (arr+1));

    printf("%ld\n", sizeof(arr));

    printf("%d number",number);
}