#include<limits.h>
#include<stdio.h>
main()
{
    short int a;
    int b;
    unsigned short int c;
    unsigned int d;
    long int e;
    long long int f;
    char g;
    unsigned char h;
    float i;
    double j;
    long double k;
    printf("size of short int is %d\n", sizeof(a));
    printf("size of int is %d\n", sizeof(b));
    printf("size of unsigned int is %d\n", sizeof(d));
    printf("size of char is %d\n", sizeof(g));
    printf("size of unsigned short int is %d\n", sizeof(c));
    printf("size of long int is %d\n", sizeof(e));
    printf("size of long long int is %d\n", sizeof(f));
    printf("size of unsigned char is %d\n", sizeof(h));
    printf("size of float is %d\n", sizeof(i));
    printf("size of double is %d\n", sizeof(j));
    printf("size of long double is %d\n", sizeof(k));
}
