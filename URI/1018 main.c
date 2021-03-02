#include<stdio.h>
int main()
{
    long int a[20]={100,50,20,10,5,2,1},b[20],c[20],n,i;
    scanf("%ld",&n);
    c[0]=n;
    for(i=0;i<7;i++)
    {
        b[i]=c[i]/a[i];
        c[i+1]=c[i]-a[i]*b[i];
    }
    printf("%d\n",n);
    for(i=0;i<7;i++)
    {
        printf("%ld nota(s) de R$ %ld,00\n",b[i],a[i]);
    }

}

