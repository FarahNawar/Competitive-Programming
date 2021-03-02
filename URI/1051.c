#include<stdio.h>
int main()
{
    double tax,a,b,c,d,sum;
    scanf("%lf",&tax);
    a=tax-2000;
    if(a<=0)
        printf("Isento\n");
    else
    {
        b=a-1000;
        if(b<=0)
        {
            a=(a*8)/100;
            sum=sum+a;
            printf("R$ %.2lf\n",sum);
        }
        else
        {
            c=b-1500;
            if(c<=0)
            {
                sum=80+(b*18)/100;
                printf("R$ %.2lf\n",sum);
            }
            else
            {
                sum=80+270+(c*28)/100;
                printf("R$ %.2lf\n",sum);
            }
        }
    }

}
