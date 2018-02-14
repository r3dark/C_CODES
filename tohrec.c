#include<stdio.h>
main()
{
	int N;
	printf("Enter Number ");
	scanf("%d",&N);
	int RES;
	RES=toh(N);
	printf("%d\n",RES);
}

int toh(int N)
{
	if (N==1)
		return 1;
	else
		return toh(N-1)+toh(N)+toh(N-1);
		//s=pow(2,N)-1;
		//return s;
}
