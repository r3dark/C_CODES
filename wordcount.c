#include<stdio.h>
#include<string.h>
main()
{
	char str[1000];
	int count=0;
	printf("Input string\n");
	gets (str);
	char wr=32;
	char *s=str;
	char *d=wr;
	while (*s!='\0')
	{
		if(*s!=*d)
		{
			s++;
			count++;
		}
	}
	printf("%d\n",count);
}
