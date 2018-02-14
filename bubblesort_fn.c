#include<stdio.h>
main()
{
    int a[5]={13,7,5,11,6};
    int i;
    bubblesort(a,5);
    for (i=0;i<5;i++)
    {
        printf("%d\n",*(a+i));
    }
}



bubblesort(int*x, int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (*(x+j)>*(x+j+1))
            {
                 temp=*(x+j);
                 *(x+j)=*(x+j+1);
                 *(x+j+1)=temp;
            }
        }
    }
}    
