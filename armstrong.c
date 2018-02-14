#include<stdio.h>
main()
{
    int num,z;
    int res=0;
    printf("enter number ");
    scanf("%d",&num);
    int x=num;
    while (num>0)
    {
        z=num%10;
        res=res+z*z*z;
        num=num/10;
    }
    if (x==res)
        printf("number %d is armstrong\n",x);
    else
        printf("number %d is not armstrong\n",x);
}
