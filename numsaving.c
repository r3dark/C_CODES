#include<stdio.h>
int main()
{
    int j=5666;
    char *p=(char*) &j;
    int i;
    for (i=0;i<4;i++)
    {
        printf ("%d\n", *p);
        p++;
    }
}
