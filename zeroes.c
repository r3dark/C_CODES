#include <stdio.h>
main()
{
    long long int a;
    int c=0;
    printf ("enter no ");
    scanf ("%lld",&a);
    while (a>0)
    {
        if (a%10==0)
        {
            c++;
            a=a/10;
        }
        else
        break;
    }
    printf ("number of zeroes are %d\n",c);
}
