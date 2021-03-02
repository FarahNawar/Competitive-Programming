#include<stdio.h>
int main()
{
    int n;
    double a[3],wa;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);
        wa=(a[0]*2+a[1]*3+a[2]*5)/10;
        printf("%.1lf\n",wa);
    }

}
