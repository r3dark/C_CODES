#include<stdio.h>
#include<math.h>
main()
{
    int i,j;
    printf("enter number");
    scanf("%d",&j);
    for (i=2;i<=(int)sqrt(j);i++)
    {
        if (j%i==0)
        {
            printf("no. is not prime\n");
            break;
        }
    }
    if(i>(int)sqrt(j))
    {
        printf("no is prime\n");
    }
}       
    
