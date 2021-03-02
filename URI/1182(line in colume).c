#include<stdio.h>
int main()
{
    int n,i,j;
    double a[12][12],sum;
    char c;
    scanf("%d %c",&n,&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);
            if(j==n)
                sum+=a[i][j];
        }
    }
    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/12);

}

