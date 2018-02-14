#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
      printf("a is greater with");
      printf(" a=%d",a);
    }
    else if (b>a && b>c)
    {
      printf("b is greater with");
      printf(" b=%d",b);
    }
    else if (c>a && c>b)
    {
      printf("c is greater with");
      printf(" c=%d",c);
    }
    else
    {
      printf("All numbers are same");
    }
}
