#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double f,a,b,c;
    scanf("%d",&n);
    a=sqrt(5);
    b=(1+a)/2;
    c=(1-a)/2;
    printf("%.1lf\n",(pow(b,n)-pow(c,n))/a);

}
