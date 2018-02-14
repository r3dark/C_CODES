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
            printf ("%d ",j%2);
            j++;
        }
        printf ("\n");
        i++;
    }
}
