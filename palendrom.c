#include<stdio.h>
main()
{
    int num,z;
    int rev=0;
    printf("enter number ");
    scanf("%d",&num);
    int x=num;
    while (num>0)
    {
        z=num%10;
        rev=rev*10+z;
        num=num/10;
    }
    if (x==rev)
        printf("number %d is palendrom\n",x);
    else
        printf("number %d is not palendrom\n",x);
}
