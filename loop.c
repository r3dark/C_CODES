#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int x;
    if (a>b && a>c){
        if(a>d)
            x=a;
            printf("%d\n",x);
    }
    if (b>a && b>c){
        if(b>d)
            x=b;
            printf("%d\n",x);
    }
    if (c>a && c>b){
        if(c>d)
            x=c;
            printf("%d\n",x);
    }
    if (d>a && d>c){
        if(d>b)
            x=d;
            printf("%d\n",x);
    }
    return x;
}

int main() {
    int a, b, c, d;
    printf("enter no ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
