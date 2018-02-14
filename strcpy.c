#include<stdio.h>
main()
{
    char s="abcdefghijklmnopqrstuvwxyz";
    char d;
    int n;
    strncpy(s,d,n);
}

void strncpy(char*s,char*d,int x)
{
    while (*s!="\0" && n)
    {
        *d=*s;
        d++;
        s++;
        n--;
    }
    *d='\0';
}
