#include<stdio.h>
main()
{
	char str1[]="ab";
	char str2[]="abddeghf";
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if (str1[i]==str2[i])
		{
			count++;
		}
	}
	printf("%d\n",count);
}


	/*char *s=str1;
	char *d=str2;
	while(*s!='\0' && *d!='\0')
	{
		if(*s==*d)
		{
			count++;
		}	
		s++;
		d++;
	}*/
