#include<stdio.h>
factorial (int *n,long long int *f)
{
    int i;
    for(i=1;i<=(*n);i++)
    {
        (*f)=(*f)*i;
    }
}
void main()
{
    int n;
    long long int f=1;
    printf("enter number ");
    scanf("%d",&n);
    factorial(&n,&f);
    printf("Factorial of %d is %lld\n",n,f);
}
    
