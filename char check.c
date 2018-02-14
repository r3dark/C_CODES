#include<stdio.h>
main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if (ch>=65 && ch<=91)
        printf("character %c %d is uppercase",ch,ch);
    else if (ch>=97 && ch<=122)
        printf("character %c %d is lowercase",ch,ch);
    else if (ch>=48 && ch<=57)
        printf("character %c %d is a digit",ch,ch);
    else
        printf("character %c %d is special character",ch,ch);
}
