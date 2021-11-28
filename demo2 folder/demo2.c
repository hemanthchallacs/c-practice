#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void mymemset( int*, int, int);
void mymemcpy(void * , const void *, int );

struct Demo{
    
    union Age_details
    {
        /* data */
        int age;
        char date[9];
    }age_details;
    char name[10];
    
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

extern int hemanth ;
int main()
{
    
    const int a = 55;
    int *ptr = &a;
    *ptr =5;
    printf("hemanth = %d\n", hemanth);
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


int *xx = (int *)malloc(3*sizeof(int));
int *yy = (int *)calloc(1,sizeof(int));
// // char *alpha = (char *)malloc(2*sizeof(char));

// // memset(alpha, 'c', 2*sizeof(char));
// // printf("\n%s", alpha);
// // free(xx);
memset(xx, -1, 2*sizeof(int));

int *yyy;


printf("\n%d, %d, %d, %d, %ld, %ld", xx[0], xx[1], *yy, *yyy, sizeof(*xx), sizeof(int));

mymemset(xx, 99,2*sizeof(int));
printf("\n%d, %d, %d, %d, %ld", xx[0], xx[1], *yy, *yyy, sizeof(*xx));


int arr[] = {1,2,3,4};
int *newarr = (int *)malloc(5*sizeof(int));

for(int i=0;i<4;i++)
{
    printf("\n%d, %d", arr[i], newarr[i]);
}
mymemcpy(newarr,arr,4*sizeof(int));
for(int i=0;i<4;i++)
{
    printf("\n%d, %d", arr[i], newarr[i]);
}

 unsigned int i = 512;
   char *c = (char*)&i;
   for(int i =0; i<4;i++)
   {
       printf("\n %d", c[i]);
   }
  printf("\n%d", hemanth);

// struct Demo b[2];

// printf("\n%ld",sizeof(b[0].age_details) );

    return 0;
}

void mymemcpy(void * destination, const void *source, int size)
{
    char *s = (char* )source;
    char *d = (char *)destination;

    for(int i= 0 ;i<size; i++)
    {
        d[i] = s[i];
    }
}

void mymemset(int* ptr, int value, int size )
{
    int n = size/sizeof(int);
    char *iter = (char*)ptr;

    for(int i =0 ;i<size;)
    {
       for(int j= 0;j<4;j++)
       {
           *(iter+i) = *(((char*)&value)+j);
           i++;
       }

    }
}