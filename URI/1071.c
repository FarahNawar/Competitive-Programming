#include<stdio.h>
int main()
{
    int x,y,i,t,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    if(x%2==0)
    {
         for(i=x+1;i<y;i+=2)
         {
             sum=sum+i;
         }
    }
    else
    {
        for(i=x+2;i<y;i+=2)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}
