#include<stdio.h>
int main()
{
    int long long n;
    int i,t,count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        if(n==2)
            printf("Prime\n");
        else if(n%2==0||n==0||n==1)
            printf("Not Prime\n");
        else
        {
            for(i=3;i*i<=n;i+=2)
            {
                if(n%i==0)
                    count++;
            }
            if(count==0)
                printf("Prime\n");
            else
                printf("Not Prime\n");
        }
    }
}
