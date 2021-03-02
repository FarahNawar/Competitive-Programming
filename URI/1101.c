#include<stdio.h>
int main()
{
    int m,n,i,j,t,sum;
    for(i=1;;i++)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        if(m<=0||n<=0)
            break;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        for(j=m;j<=n;j++)
        {
            printf("%d ",j);
            sum=sum+j;
        }
        printf("Sum=%d\n",sum);
    }

}
