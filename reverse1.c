#include<stdio.h>
#include<string.h>
main()
{
	char s1[80]="hello world";
	char *a=s1;
	char b[10];
	int i,j,z=0;
	int l=strlen(s1);
	int t;
	for (t=l-1;t>=-1;t--)
	{
		z=0;
		if((s1[t]==' ')||(t==-1))
		{
			for (j=t+1;;j++)
			{
				if((s1[j]=='\0')||(s1[j]==' '))
					break;
				b[z]=s1[j];
				z++;
			}
			b[z]='\0';
			puts(b);
		}
	}
}
