#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter numbers");
    scanf("%d %d %d",&a,&b,&c);
    a>b?a>c?printf("greater is a=%d",a):printf("greater is c=%d",c):b>c?printf("greater is b=%d",b):printf("greater is c=%d",c);
    //a>b?a>c?a:c:b>c?b:c;
}
