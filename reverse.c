#include<stdio.h>
main()
{
	int count=1,i=0,j=0,k;
	char str[80]="hello new world";
	char *d=str;
	while (*d!='\0')
	{
		if (*d==' ')
		{
			count++;
		}
		d++;
	}
	char arr[count][10];
	d=str;
	while(*d!='\0')
	{
		while(*d!=' ' && *d!='\0')
		{
			arr[i][j]=*d;
			d++;
			j++;
		}
		if(*d==' ')
		{
			arr[i][j]='\0';
			i++;
			d++;
			j=0;
		}
		else if (*d=='\0')
		{
			arr[i][j]='\0';
		}
	}
	for (k=i;k>=0;k--)
	{
		printf("%s",arr[k]);
		printf(" ");
	}
}
