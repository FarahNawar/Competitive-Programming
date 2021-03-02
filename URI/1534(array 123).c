#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    while(scanf("%d",&n)!=EOF)
   {
       for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1||i==j)
            {
                if(i+j==n+1)
                    printf("2");
                if(i==j)
                {
                    if(n%2==0)
                    printf("1");
                    else if(i!=n/2+1)
                    printf("1");
                }
            }
            else
            printf("3");
        }
        printf("\n");
    }
   }

}
