#include<stdio.h>
int f(int n);
int count;
int main()
{
    int n,value,t;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
    value=f(n);
    printf("fib(%d) = %d calls = %d\n",n,count-1,value);
    }

}
int f(int n)
{
    count++;
    if(n==0)return 0;
    if(n==1)
        return 1;
    else
        return f(n-1)+f(n-2);
}
