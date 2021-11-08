#include<stdio.h>
#include<string.h>

struct Demo{
    char name[10];
    union Age_details
    {
        /* data */
        int age;
        char date[9];
    }age_details;
    
};

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int sum(int a, int b)
{
    return a+b;
}
int main()
{
    const int a = 55;
    // int *ptr = &a;
    // *ptr =5;
    int (*func)(int , int) = &sum;
    printf("%d",func(2,99));
    printf("Hello world %d", a);

struct Demo challa;
     
     strcpy(challa.name, "hemanth");
     challa.age_details.age = 25;
     strcpy(challa.age_details.date, "23051996");
//      challa.age_details.age = 56;
// challa.name = "challa";
printf("\n%d, %s\n",challa.age_details.age, challa.age_details.date);

printf("\nsizeof age_details.date :%ld", sizeof("hello"));
printf("\nlength age_details.date :%ld", strlen("hello"));

    return 0;
}