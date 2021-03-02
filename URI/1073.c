#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        p=i;
        p=p*i;
        printf("%d^2 = %d\n",i,p);
    }
}
