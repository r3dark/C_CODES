#include<stdio.h>
#include<string.h>
main()
{
	char str[]="aabbbccdddddeeeeefffffffffffffffgghiiijkkkkkkkklmmnopppppppppqrrrrrsstuuvvvvwwwwwxyyyyyyyyzzzzzzzzzzzzzzzzz";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=str[i+1])
		{
			printf("%c ",str[i]);
		}
	}
	printf("\n");
}
