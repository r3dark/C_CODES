#include<stdio.h>
int partition(int a[],int left,int right);
int quicksort(int arr[],int left, int right)
{
	if (left<right)
	{
		int q=partition(arr,left,right);
		quicksort(arr,left,q-1);
		quicksort(arr,q+1,right);
	}
}

int partition(int a[],int left,int right)
{
	int pivot=a[right];
	int j=left;
	int i=j-1;
	for (j=left;j<right;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			int temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	i++;
	int t=a[i];
	a[i]=pivot;
	a[right]=t;
	return i;
}

int main()
{
	int i,j;
	int a[6]={3,5,6,1,2,4};
	quicksort(a,0,5);
	for(j=0;j<6;j++)
		printf("%d ",a[j]);
	printf("\n");
}
