#include<stdio.h>
main()
{
	printf("Enter string\n");
	char c[50];
	char ch;
    gets(c);
    printf("Enter character to check frequency\n");
    scanf("%c",&ch);
    int count=0;
    char* i=c;
    for (i=c;*i!='\0';i++)
    {
    	if(*i==ch)
    		count++;
    }
    printf("frequency of %c is %d\n",ch,count);
}
