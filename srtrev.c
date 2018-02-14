#include<stdio.h>
#include<string.h>
main()
{
	char *c="abcdefghijklmnopqrstuvwxyz";
	int z=strlen(c);
	char a[z+1];
	char *t;
	char*b=a;
	for (t=c+z-1;t>=c;t++)
	{
		*b=*t;
		b++;
	}
	*b='\0';
}
