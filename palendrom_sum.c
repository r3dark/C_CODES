#include<stdio.h>
main()
{
    int n,i;
    int num,z;
    int rev;
    int c;
    printf("enter number ");
    scanf("%d",&n);
    while (1)
    {
    int x=num;
    rev=0;
    while (num>0)
    {
        z=num%10;
        rev=rev*10+z;
        num=num/10;
    }
    if (x==rev)
    {
        z=num%10;
        num=num/10;
        c=c+z;
        printf("%d\n",c);
    }   
    else
        i++;
    }
}
