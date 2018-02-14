#include<stdio.h>
main()
{
    int i,c;
    char *str="abcdefghijklmnopqrstuvwxyz";
    for (i=0;*(c+i)!='\0';i++)
    {
        if (*(c+i)=='a'||*(c+i)=='e'||*(c+i)=='i'||*(c+i)=='o'||*(c+i)=='u')
            c++;
    }
    printf("%d",c);
}
