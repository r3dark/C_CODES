#include<stdio.h>
main()
{
    int i,j;
    int c=0;
    printf("Enter number ");
    scanf("%d",&i);
    int x=i;
    while (i|0>0)
    {
        c++;
        i=i>>1;
    }
    j=~(x^(~0<<3));
    printf("Compliment is %d\n",j);
}
            
