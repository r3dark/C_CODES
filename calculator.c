#include<stdio.h>
main()
{
    int a,b,c;
    char ch;
    printf("Enter nos.\n");
    scanf("%d %d", &a,&b);
    scanf("%c",&ch);
    printf("Enter operation\n");
    scanf("%c",&ch);
    switch (ch)
    {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '/':
            c=a/b;
            break;
        case '*':
            c=a*b;
            break;
        default:
            printf("Error\n");
     }
     printf("%d\n", c);
}
    
