#include<stdio.h>
int main()
{
    int a[20]={100,50,20,10,5,2,1},b[20],c[20],n,i;
    scanf("%d",&n);
    c[0]=n;
    for(i=0;i<7;i++)
    {
        b[i]=c[i]/a[i];
        printf("%d=%d/%d\n", b[i],c[i],a[i]);
        c[i+1]=c[i]-a[i]*b[i];
        printf("deducting %d*%d remains %d\n",a[i],b[i],c[i]);
    }
    for(i=0;i<7;i++)
    {
        printf("%d\n",b[i]);
    }

}

