#include<stdio.h>
int main()
{
    int t,n,i,a;
    scanf("%d",&t);
    while(t--)
    {
        a=1;
        scanf("%d",&n);
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                a++;
                break;
            }
        }
        if(a>1)
        printf("%d nao eh primo\n",n);
        else
            printf("%d eh primo\n",n);

    }
}
