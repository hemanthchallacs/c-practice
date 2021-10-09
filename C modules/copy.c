#include<stdio.h>
#include<stddef.h>
void * copy(const void *, void *, size_t);

int main()
{
    char src[] = "hello";
    char *txt = "hello";
    src[3] = 'z';
    // txt[3] ='z';
    printf("size of src %ld\n", sizeof(src));
    char dest[sizeof(src)];
    copy(src, dest, sizeof(src));
    printf("%s\n",dest);
    return 1;
}

void * copy(const void *src, void *dest, size_t size){

        char *d = (char *)dest;
        char *s = (char *)src;
        for(int i=0; i<size; i++)
        {
            *(d+i) = *(s+i);
        }
    return dest;
}
