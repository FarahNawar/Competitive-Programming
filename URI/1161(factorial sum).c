#include<stdio.h>
int main()
{
    long long int a,b,sum1=1,sum2=1,i;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        sum1=1;
        sum2=1;
            for(i=1;i<=a;i++)
    {
        sum1=i*sum1;
    }
    for(i=1;i<=b;i++)
        sum2=sum2*i;
    printf("%lld\n",sum1+sum2);
    }

}
