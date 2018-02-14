#include<stdio.h>
main()
{
    int a[5]={5,4,3,2,1};
    int i;
    selectionsort (a,5);
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}

void selectionsort (int *x,int b)
{
    int i,j,min,index;
    index=i;
    for (i=0;i<b-1;i++)
    {
        min=(*(b+i));
        for (j=i;j<b;j++)
        {
            if (min>(*(b+i))
            {
                min=(*(b+i));
                index=j;
            }
        }
    }
}
