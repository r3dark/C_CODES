#include<stdio.h>
main()
{
int n,a,s,r;
printf("enter any no");
scanf("%d",&a);
s=0,n=a;
while(n>0)
s=s*10;
r=n%10;
s=s+r;
n=n/10;
if(a==s)
{
printf("palindrome %d",n);
}
else
printf("not palindrome");
}
