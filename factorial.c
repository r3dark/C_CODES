#include<stdio.h>
main()
{
    int i,n;
    long long int f=1;
    printf("Enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is %lld\n",n,f);
}
