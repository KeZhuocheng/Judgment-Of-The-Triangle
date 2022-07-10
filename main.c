#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("give the value of a,b,c:\n");
    scanf("%lf",&a);
    printf("give the value of b:\n");
    scanf("%lf",&b);
    printf("give the value of c:\n");
    scanf("%lf",&c);
    if(a+b>c&&a+c>b&&c+b>a)
        printf("it s a triangle");
    else
    printf("it s not a triangle");

    return 0;
}
