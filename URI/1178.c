#include<stdio.h>
int main()
{
    double x;
    int i,n=10;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {

        printf("N[%d] = %.4lf\n",i,x);
        x/=2;
    }

}
