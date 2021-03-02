#include<stdio.h>
int main()
{
    long long int x,v;
    while(2)
    {
        scanf("%lld %lld",&x,&v);
        if(x==0&&v==0)
            break;
        printf("%lld\n",x*v);
    }

}
