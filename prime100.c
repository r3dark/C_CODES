#include<stdio.h>
#include<math.h>
main()
{
    int i,j;
    for (j=2;j<=100;j++)
    {
        for (i=2;i<=(int)sqrt(j);i++)
        {
            if (j%i==0)
                printf("no. is not prime\n");
                break;
        }
    }
    if (i>(int)sqrt(j))
        printf("%d\n",j);
}
