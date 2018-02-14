#include<stdio.h>
main()
{
	int k;
	char str[80]="hello world";
	char *d=str;
	while (*d!='\0');
	{
		d++;
	}
	d=d-1;
	char res[80];
	char *s=res;
	while (d!=str)
	{
		*s=*d;
		s++;
		d--;
	}
	*s=*d;
	s++;
	*s='\0';

