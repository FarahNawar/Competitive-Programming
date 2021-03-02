#include<stdio.h>
int main()
{
    int a,n,j,sum=0;
    scanf("%d",&a);
    while(2)
    {
        scanf("%d",&n);
        if(n<=0)
            continue;
            for(j=1;j<=n;j++)
            {
                 sum=sum+a;
                 a++;
            }
            break;
    }
    printf("%d\n",sum);
}
