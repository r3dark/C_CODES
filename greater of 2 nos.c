#include<stdio.h>
main()
{
    int a,b;
    printf("Enter numbers");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
      printf("a is greater with");
      printf(" a=%d",a);
    }
    else if (b>a)
    {
      printf("b is greater with");
      printf(" b=%d",b);
    }
    else
    {
      printf("both numbers are same");
    }
}
