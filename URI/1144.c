#include<stdio.h>
int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         a=i*i;
         b=a*i;
        for(j=1;j<=2;j++)
        {
         printf("%d %d %d\n",i,a,b);
         a++;
         b++;
        }
    }
}
