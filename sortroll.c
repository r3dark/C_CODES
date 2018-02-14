#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter number of names ");
	scanf("%d",&n);
	int rollno[n];
	char name[n][50];
	char *names[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		scanf("%d",&rollno[i]);
		getchar();
	}
	for(i=0;i<n;i++)
	{
		names[i]=name[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(rollno[j]>rollno[j+1])
			{
				int temp=rollno[j];
				rollno[j]=rollno[j+1];
				rollno[j+1]=temp;
				char *t=names[j];
				names[j]=names[j+1];
				names[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t %s\n",rollno[i],names[i]);
	}
}
