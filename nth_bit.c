#include<stdio.h>
main()
{
    int n,b,sh;
    printf("Enter number ");
    scanf("%d",&n);
    printf("Enter bit to be checked ");
    scanf("%d",&b);
    if (b==32)
        printf("Enter valid bit to be checked");
    n=n>>(b-1);
    sh=n&1;
    if (sh==1)
        printf("bit is on\n");
    else if (sh==0)
        printf("bit is off\n");
}
    
    
        

