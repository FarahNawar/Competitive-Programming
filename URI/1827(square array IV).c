#include<stdio.h>
int main()
{
    int i,j,n;
   while(scanf("%d",&n)!=EOF)
   {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(i>n/3&&i<=(n-(n/3))&&j>n/3&&j<=(n-(n/3)))
           {
               if(i==n/2+1&&j==n/2+1)
                printf("4");
               else
                printf("1");
           }
           else
           {
               if(i==j||i+j==n+1)
               {
                   if(i==j)
                    printf("2");
                   if(i+j==n+1)
                    printf("3");
               }
               else
                printf("0");
           }
        }
        printf("\n");
    }
    printf("\n");
   }

}
