#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]="abcdef";
	char *ans=strchr(str,'f');
	printf("%d", *ans);
}
