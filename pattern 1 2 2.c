#include<stdio.h>
main()
{
    int i,j;
    i=1;
    while (i<=4)
    {
        j=1;
        while (j<=i)
        {
            printf ("%d ",i);
            j++;
        }
        printf ("\n");
        i++;
    }
}
