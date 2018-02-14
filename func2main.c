#include<stdio.h>
int (*x)[6];
int (* arr_ret())[6]
{
    static int a[6]={1,2,3,4,5,6};
    return a;
}

int main()
{
    int (*x)=arr_ret();
    int i;
    for (i=0;i<6;i++)
        printf("%d",*(x+i));
}
