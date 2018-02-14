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
        res=res+z;
        num=num/10;
    }
        printf("sum of digits of %d is %d\n",x,res);
}
