#include<stdio.h>
main()
{
    int a=0;
    int b=1;
    int j;
    int range;
    printf("enter range ");
    scanf("%d",&range);
    printf("%d %d ",a,b);
    for (j=a+b;j<=range;)
    {
        printf("%d ",j);
        a=b;
        b=j;
        j=a+b;
    }
    printf("\n");
}
        
