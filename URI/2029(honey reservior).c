#include<stdio.h>
#define pi 3.14
int main()
{
    double d,r,h,v;
    while(scanf("%lf",&v)!=EOF)
    {
        scanf("%lf",&d);
        printf("ALTURA = %.2lf\n",(v*4)/(pi*d*d));
        printf("AREA = %.2lf\n",(pi*d*d)/4);
    }
}
