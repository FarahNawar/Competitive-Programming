#include<stdio.h>
int main()
{
    int m,n,c,i;
    double sum1,sum2;
    while(scanf("%d",&m)!=EOF)
    {
        sum1=0;
        sum2=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&n,&c);
            sum1=sum1+n*c*1.0;
            sum2=sum2+c*1.0;
        }
        printf("%.4lf\n",sum1/(sum2*100));
    }
}
