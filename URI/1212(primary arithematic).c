#include<stdio.h>
int main()
{
    long long int a,b,carry;
    long long int r1,r2,d1,d2,c;
    while(2)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
            break;
    d1=a;
    d2=b;
    c=0;
    carry=0;
    while(2)
    {
        if(d1==0&&d2==0)
            break;
        r1=d1%10;
        d1=d1/10;
        r2=d2%10;
        d2=d2/10;
        if(r1+r2+c>9)
        {
            carry++;
            c=1;
        }
        else
            c=0;
    }
    if(carry==0)
        printf("No carry operation.\n");
    else if(carry==1)
    printf("%lld carry operation.\n",carry);
    else
        printf("%lld carry operations.\n",carry);
    }
}
