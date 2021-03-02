#include<stdio.h>
int main()
{
    int n,num,c=0,r=0,s=0,i,total;
    char ani;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&num,&ani);
        if(ani=='C')
            c+=num;
            if(ani=='R')
                r+=num;
            if(ani=='S')
                s+=num;
    }
    total=c+r+s;
   printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",((double)c/total)*100);
    printf("Percentual de ratos: %.2lf %%\n",((double)r/total)*100);
    printf("Percentual de sapos: %.2lf %%\n",((double)s/total)*100);
}
