#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m%2==0)
            a++;
        if(m%3==0)
            b++;
        if(m%4==0)
            c++;
        if(m%5==0)
            d++;
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);

}
