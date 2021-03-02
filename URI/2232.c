#include<stdio.h>
int a(int i);
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&i);
        printf("%d\n",a(i-1));
    }
}
int a(int i)
{
    int sum=1,j;
    if(i==0)
        return 1;
    else
    {
        for(j=1; j<=i; j++)
        {
            sum=sum*2;
        }
        return (sum+a(i-1));
    }
}
