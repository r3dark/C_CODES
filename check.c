#include<stdio.h>
void check (int *x, int *y)
{
    printf("%d %d\n",*x,*y);
    *x=30;
    *y=40;
    printf("%d %d\n",*x,*y);
}

int main()
{
    int a=10;
    int b=20;
    printf("%d %d\n",a,b);
    check(&a,&b);
    printf("%d %d\n",a,b);
}
