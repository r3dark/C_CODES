#include<stdio.h>
main()
{
    int i=1,s=0;
    while (i<=10)
    {
        s=s+i;
        i++;
    }
    printf("sum of the first 10 numbers is %d",s);
}
