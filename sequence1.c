#include<stdio.h>
#include<math.h>
main()
{
    int i,n;
    long long int f=1;
    long double sum=0;
    for (i=1;i<=n;i++)
    {
        long long int x=pow(i,i);
        f=f*i;
        double j=(double)x/f;
        sum=sum+j;
    }
    printf("%llf",sum);
}
        
