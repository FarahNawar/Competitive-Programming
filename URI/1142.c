#include<stdio.h>
int main()
{
    int n,i,a,j,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=4;j++)
        {
            a=num++;
            if(j!=4)
                printf("%d ",a);
            else
                printf("PUM\n");
        }
    }
}
