#include<stdio.h>
main()
{
    int i,j;
    i=1;
    int c=1;
    while (i<=4)
    {
        j=1;
        while (j<=i)
        {
            printf ("%d ",c++);
            j++;
        }
        printf ("\n");
        i++;
    }
}
