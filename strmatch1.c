#include<stdio.h>
#include<string.h>
//using hashing
main()
{
	char str1[50]="abcd12ef";
	char str2[50]="abddeghf";
	int i,j;
	int arr[128]={0};
	for(i=0;i<strlen(str1);i++)
	{
		for(j=0;j<strlen(str2);i++)
		{
			if(str1[i]==str2[j])
			{
				int x=(int)str1[i];
				arr[x]++;
			}
		}
	}
	for(i=0;i<128;i++)
	{
		if(arr[i]>0)
		printf("%c ",(char)i);
	}
}
