#include<stdio.h>
main()
{
	int N;
	printf("Enter Number ");
	scanf("%d",&N);
	int RES;
	RES=fact(N);
	printf("%d\n",RES);
}

int fact(int N)
{
	if(N==1)
		return 1;
	else
		return N*fact(N-1);
}
