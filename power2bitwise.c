#include<stdio.h>
main()
{
    int n,sh;
    int c=0;
    printf("Enter number ");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n>>1;
        sh=n&1;
        if (sh==1)
        {
            c++;
        }
        if (c>1)
            break;
    }
    if (c==1)
        printf("Number is a power of 2\n");
    else
         printf("Number is not a power of 2\n");
}
