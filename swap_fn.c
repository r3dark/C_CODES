#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter no ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}
void swap(int*a,int*b)
{
    *b=(*b)+(*a);
    *a=(*b)-(*a);
    *b=(*b)-(*a);
}
