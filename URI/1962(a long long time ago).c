#include<stdio.h>
int main()
{
    long long int t,y;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&y);
        if(y-2015>=0)
            printf("%lld A.C.\n",y-2015+1);
        else
        {
            printf("%lld D.C.\n",2015-y);
        }
    }
}
