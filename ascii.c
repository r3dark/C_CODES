#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf ("greater is a=%d",a);
        else
            printf ("greater is c=%d",c);
    }
    else
    {
        if (c>b)
            printf ("greater is c=%d",c);
        else
            printf ("greater is b=%d",b);
    }
}
