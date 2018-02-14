#include<stdio.h>
int calc (int a, int b,int*s,int*sub,int*m,float*d)
{    
    *s=a+b;
    *sub=a-b;
    *m=a*b;
    *d=a/b;
}
int main()
{
    int a,b,s,sub,m;
    float d;
    printf("enter nos ");
    scanf("%d %d",&a,&b);
    calc(a,b,&s,&sub,&m,&d);
    printf("%d %d %d %f\n",s,sub,m,d);
}
