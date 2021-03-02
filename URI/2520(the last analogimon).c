#include<stdio.h>
#include<stdlib.h>
int main()
{
    int city,m,n,pathmi,pathpi,pathmj,pathpj,i,j;
   while(scanf("%d %d",&m,&n)!=EOF)
   {
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               scanf("%d",&city);
               if(city==2)
               {
                   pathpi=i;
                   pathpj=j;
               }
               if(city==1)
               {
                    pathmi=i;
                    pathmj=j;
               }
           }
       }
       printf("%d\n",abs(pathmi-pathpi)+abs(pathmj-pathpj));
   }
}
