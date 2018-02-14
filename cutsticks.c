#include<stdio.h>
int main()
{
	int count,min,i,j,n,k;
	int a[7]={6,4,2,2,6,8,10};
	/*printf("Enter number of sticks ");
	scanf("%d",&count);
	int a[count];
	for (i=0;i<count;i++)
	{
		printf("enter length of stick ");
		scanf("%d",&a[i]);
	}*/
	n=7;
	count=n;
	printf("%d\n",count);
	while (count>0)
	{
		for (i=0;i<n;i++)
		{
			if (a[i]!=0)
			{
				min=a[i];
				break;
			}
		}
		for (j=i+1;j<n;j++)
		{
			if (a[j]!=0 && a[j]<min)
				min=a[j];
		}
		count=0;
		for (k=0;k<n;k++)
		{
			if (a[k]!=0)
				a[k]=a[k]-min;
			if (a[k]!=0)
				count++;
		}
		printf("%d\n",count);
	}
}
