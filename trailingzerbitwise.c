#include<stdio.h>
main()
{
    int n,c=0;
    printf("enter number ");
    scanf("%d",&n);
    while (n!=0)
    {
        if(n&1==1)
            break;
        else
        {
            c++;
            n=n>>1;
        }
    }
    printf("no. of trailing zeroes in the entered no. is/are %d\n",c);
}
