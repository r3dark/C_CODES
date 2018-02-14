#include<stdio.h>
int main(int argc, char*argv[])
{
	int i,res;
	for (i=1;i<argc;i++)
	{
		res=res+atoi(argv[i]);
	}
	printf("%d\n",res);
}
