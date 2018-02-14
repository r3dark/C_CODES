#include<stdio.h>
#include<string.h>
main()
{
	char str[1000];
	char wr[50];
	int count=0;
	printf("Input string\n");
	gets (str);
	printf("Enter word for search\n");
	gets (wr);
	char *s=str;
	char *d=wr;
	while (*s!='\0')
	{
		if(*s!=*d)
		{
			s++;
			continue;
		}
	while (*d!='\0')
	{
		if(*s==*d)
		{
			d++;
			s++;
		}
		else
		{
			d=wr;
			break;
		}
	}
	if (*d=='\0')
	{
		count++;
		d=wr;
	}}
	printf("%d\n",count);
}
	
