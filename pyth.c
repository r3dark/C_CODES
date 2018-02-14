#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter no");
    scanf("%d %d %d",&a,&b,&c);
    if ((c*c)==(a*a)+(b*b))
        printf("yes");
    else
        printf("no");
    printf("%d",(c*c));
}
    
