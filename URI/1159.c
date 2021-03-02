#include<stdio.h>
int main()
{
    int x,i,sum,c;
    while(2)
    {
        scanf("%d",&x);
        sum=0;
        if(x==0)
            break;
        if(x%2==0)
        {
            for(i=1,c=x;i<=5;c+=2,i++)
            {
                sum=sum+c;
            }
            printf("%d\n",sum);
        }
        else
        {
            for(i=1,c=x+1;i<=5;c+=2,i++)
            {
                sum=sum+c;
            }
            printf("%d\n",sum);
        }
    }
}
