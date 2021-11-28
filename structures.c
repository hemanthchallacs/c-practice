struct DD{
    int a;
    int b;
    double c;
};

int main()
{
    struct DD d[2];
    printf("%ld", (char*)&d[1]-(char *)&d[0]);
    return 0;
}