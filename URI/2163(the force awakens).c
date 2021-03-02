#include<stdio.h>
int main()
{
    int n,m,i,j,a[1000][1000],sum=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=2;i<=n-1;i++)
    {
        for(j=2;j<=m-1;j++)
        {

                if(a[i][j]==42&&a[i][j-1]==7&&a[i][j+1]==7&&a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7&&a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7)
                    {
                        printf("found\n");
                        break;
                    }
        }
    }
}

