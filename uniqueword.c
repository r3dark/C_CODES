#include<stdio.h>
#include<string.h>
main()
{
	int count=1,i=0,j=0,k;
	char str[80]="hello new world hello new";
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
	int c=0,l;
	char b[count][10];
	for (k=0;k<count;k++)
	{
		l=l-1;
		while (l>=0)
		{
			if (strcmp(arr[k],arr[l])==0)
				break;
			l--;
		}
		if (l<0)
		{
			strcpy(b[c],arr[k]);
			c++;
		}
	}
	for (k=0;k<c;k++)
		printf("%s\n",b[k]);
}
