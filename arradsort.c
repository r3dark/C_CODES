#include<stdio.h>
main()
{
    int a[6]={3,9,5,1,7,2};
    int *p[6]={a,a+1,a+2,a+3,a+4,a+5};
    int i,j;
    for (i=0;i<6;i++)
        printf("%d\n",(*p)[i]);
    int n=6;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (*p[j]>*p[j+1])
            {
                int temp=*p[j];
                    *p[j]=*p[j+1];
                    *p[j+1]=temp;
            }
        }
    }
    for (i=0;i<6;i++)
        printf("%d ",*p[i]);
}
