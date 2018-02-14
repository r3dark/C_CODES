#include<stdio.h>
void abc(int *a, int *b)
    {
        printf("%d %d\n",*a,*b);
        *a=30;
        *b=40;
        printf("%d %d\n",*a,*b);
    }
int main()
    {
        int x=10;
        int y=20;
        printf("%d %d\n",x,y);
        abc(&x,&y);
        printf("%d %d\n",x,y);
    }
