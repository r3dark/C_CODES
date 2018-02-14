#include<stdio.h>
main()
{
    int i,j;
    int c=1;
    for (i=1;i<=4;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf ("%d ",c++);
        }
        printf ("\n");
    }
}
