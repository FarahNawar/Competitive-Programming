#include<stdio.h>
int main()
{
    int n,i,p,j,a[100][100];

    scanf("%d",&n);
    p=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i==1||j==1||i==n||j==n)
            a[i][j]=1;
            else
            a[i][j]=0;
        }

    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                printf(" %d ",a[i][j]);
            }
            printf("\n");
    }
}
