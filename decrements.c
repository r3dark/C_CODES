#include<stdio.h>
main()
{
    int a,c;
    a=10;
    c=--a;
    //c=a--;
    //c=a-- + a--;
    //c=--a + --a;
    //c=a-- + --a;
    //c=--a + a--;
    //c=a-- - a--;
    //c=--a - --a;
    //c=a-- - --a;
    //c=--a - a--;
    printf("a=%d c=%d",a,c);
}
