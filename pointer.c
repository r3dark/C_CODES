#include<stdio.h>
main()
{
    int a=10;
    int*p=&a;
    printf("%d %d %d\n",++*p,*p++,*++p);
}
