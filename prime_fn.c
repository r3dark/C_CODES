#include<stdio.h>
#include<math.h>
int prime (int a,int b)
{
    int i,j;
    for (i=a;i<=b;i++)
    {
        for (j=2;j<=(int)sqrt(i);j++)
        {
            if ((i%j)==0)    
                break;
        }
        if (j>(int)sqrt(i))
        printf("%d\n",i);
    }
    
}
void main()
{
    int a,b;
    printf("enter nos ");
    scanf("%d %d",&a,&b);
    prime(a,b);
}
    
