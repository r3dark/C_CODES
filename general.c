#include <stdio.h>
main()
{
    float sal;
    long long int x= printf ("Enter salary\n");
    long long int y= scanf ("%f", &sal);
    if (sal>10000)
        sal=sal+0.10*sal;
    else
        sal=sal+0.15*sal;
    printf ("%f\n", sal);
    printf ("%lld\n", x);
    printf ("%lld\n", y);
}
