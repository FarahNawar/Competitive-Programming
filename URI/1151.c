#include<stdio.h>
int f(int n);
int main()
{
    int a=1,b=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",f(i));
    }
}
int f(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return f(n-2)+f(n-1);
}

