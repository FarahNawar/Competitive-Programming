#include<stdio.h>
int main()
{
    int n,i,sum=0;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        sum=sum+n;
    }
    printf("%.2f\n",(float)sum/(i-1));
}
