#include<stdio.h>
int arr(int (*a)[3],int x)
{
    int i;
    for (i=0;i<x;i++)
    {
        printf("%d\n",(*a)[i]);
    }
}

int main()
{
    int a[3]={1,2,3};
    arr(&a,3);
}
