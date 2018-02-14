#include<stdio.h>
int gcd (int,int);
void main()
{
    int x,y;
    printf("enter 2 nos\n");
    scanf("%d %d",&x,&y);
    int result=gcd(x,y);
    printf("%d\n", result);
}

//function gcd

int gcd (int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else if (a>=b && b>0)
    {
        return gcd (b,a%b);
    }
}
