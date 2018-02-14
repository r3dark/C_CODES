#include<stdio.h>
main()
{
    int i=10;
    while (i>0)
    {
        if (i==4)
        {
            i--;
            break;
        }
        printf ("%d\n",i);
        i--;
    }
    printf ("%d\n",i);
}
