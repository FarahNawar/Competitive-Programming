#include<stdio.h>
int main()
{
    int x,y,i,p,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        p=x;
        x=y;
        y=p;
    }
    for(i=x;i<=y;i++)
    {

        if(i%13!=0)
        {
        p=i;
        sum=sum+p;
        }
    }
    printf("%d\n",sum);
}
