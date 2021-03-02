#include<stdio.h>
int main()
{
    int test,a,b,temp,i,sum;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)
        {
            sum=0;
            for(i=a+1;i<b;i+=2)
            {
                sum+=i;
            }
            printf("%d\n",sum);
        }
        else
        {
            sum=0;
            for(i=a+2;i<b;i+=2)
            {
                sum=sum+i;
            }
            printf("%d\n",sum);
        }
    }
}
