#include<stdio.h>
main()
{
    int i,j;
    i=1;
    while (i<=5)
    {
        j=5;
        while (j>=i)
        {
            printf ("1 ");
            j--;
        }
        printf ("\n");
        i++;
    }
}
