#include<stdio.h>
int count(int n);
int main()
{
    int n,i=0,j,m;
    while(scanf("%d",&n)!=EOF)
    {
        i++;
        if(n==0)
        printf("Caso %d: %d numero\n",i,count(n));
        else
            printf("Caso %d: %d numeros\n",i,count(n));
            if(n==0)
        printf("0\n");
        else
            printf("0 ");
        for(m=1;m<=n;m++)
        {
            for(j=1;j<=m;j++)
            {
                if(m==n&&j==m)
                    printf("%d",m);
                else
                 printf("%d ",m);
            }

        }
        printf("\n");
    }

}
int count(int n)
{
    int sum,i;
    sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i;
    return(sum+1);
}
