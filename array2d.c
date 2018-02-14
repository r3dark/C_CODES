#include<stdio.h>
int arr(int (*a)[2][2],int x,int y)
{
    int i,j;
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            printf("%d\n",*(*(*a+i)+j));
        }
    }
}

int main()
{
    int a[2][2]={1,2,3,4};
    arr(&a,2,2);
}
