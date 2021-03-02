#include<stdio.h>
int main()
{
    int a[20],c[20],i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        c[19-i]=a[i];
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,c[i]);
    }
}
