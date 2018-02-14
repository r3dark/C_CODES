#include<stdio.h>
main()
{
   int n,d;
   int a=0;
   printf ("Enter number");
   scanf ("%d",&n);
   while (n!=0)
   {
      d=n%10;
      n=n/10;
      a=a+d;
   }
   printf ("%d",a);
}
