#include<stdio.h>
int n,dp[10000];
int fib(int n);
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<10000;i++)
        dp[i]=-1;
    while(t--)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %d\n",n,fib(n));
    }
}
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1)
        return dp[n];
        else
        {
            dp[n]=(fib(n-1)+fib(n-2));
            return dp[n];
        }
}
