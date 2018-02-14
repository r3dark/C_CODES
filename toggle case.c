#include<stdio.h>
main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if (ch>=65 && ch<=91)
        printf("lowercase character is %c %d",ch+32,ch+32);
    else if (ch>=97 && ch<=122)
        printf("uppercase character is %c %d",ch-32,ch-32);
    else
        printf("character %c %d is special character or digit",ch,ch);
}
