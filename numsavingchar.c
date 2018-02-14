#include<stdio.h>
int main()
{
    float j=5.6;
    char *p=(char*) &j;
    int i;
    for (i=0;i<4;i++)
    {
        printf ("%d\n", *p);
        p++;
    }
}
