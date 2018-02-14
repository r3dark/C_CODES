#include<stdio.h>
main()
{
    int i;
    int j;
    int x;
    int a[5]={13,7,5,11,6};
    int n=5;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
            }
            for (x=0;x<5;x++)
        		printf("%d ",a[x]);
        	printf("\n");
        }
    }
//    for (x=0;x<5;x++)
//        printf("%d ",a[x]);
}
