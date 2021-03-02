#include<stdio.h>
int main()
{
    int main,n,sum=0,i;
    char a[8];
    scanf("%d %d",&main,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        if(a[0]=='f')
        {
            sum+=2;
            main--;
        }
        if(a[0]=='c')
        {
            sum--;
        }
    }
 printf("%d\n",main+sum);
}
