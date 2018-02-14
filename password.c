#include<stdio.h>
#include<math.h>
int prime (int n,int m)
{
    int i=n;
    int j;
    int sum=0;
    while (1)
    {
        int count=0;
        for (j=2;j<=(int)sqrt(i);j++)
        {
            if ((i%j)==0)
            {
                count++;    
                break;
            }    
        }
        if (count==0)
        {
            sum=sum+i;
            m--;
        }
        i++;
        if (m==0)
            break;
    }
    printf("password is %d\n",sum);
}
void main()
{
    int n,m;
    printf("enter start ");
    scanf("%d",&n);
    printf("enter range ");
    scanf("%d",&m);
    prime(n,m);
}
    
