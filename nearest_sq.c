#include<stdio.h>
main()
{
    int i=2;
    int n;
    printf ("Enter number ");
    scanf ("%d",&n);
    while (i*i<n)
    {
        i++;
    }
    printf ("%d\n",i-1);
}        
