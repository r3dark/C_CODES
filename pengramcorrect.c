#include<stdio.h>
main()
{
	int i;
	char *str="abcdefghijklmnopqrstuvwxyz";
	char*d=str;
	int arr[26]={0};
	while(*d!='\0')
	{
		if(isalpha(*d))
		{
			int x=(int)(*d);
			if(x>=97)
			{
				x=x-97;
			}
			else
			{
				x=x-65;
			}
			arr[x]++;
		}
			d++;
	}
	for  (i=0;i<=25;i++)
	{
		if(arr[i]==0)
		{
			printf("NOT PENGRAM\n");
			break;
		}
	}
	if (i==26)
		printf("PENGRAM\n");
}
