#include<stdio.h>
main()
{
	int i,j,count=0;
	char *a={"abcdefghijklmopqrstuvwxyz"};
	char c[1000];
	gets (c);
	for (i=0;i!='\0';i++)
	{
		for (j=0;j!='\0';j++)
		{
			if (a[i]=c[j])
			{
				break;
			}
				
}
