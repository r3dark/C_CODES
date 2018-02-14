#include<stdio.h>
main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    n%2==0?printf("number n=%d is even",n):printf("number n=%d is odd",n);
}
