#include<stdio.h>
int main()
{
    int x,z,i,m=0,sum=0,j;
    scanf("%d",&x);
    for(i=1;; i++)
    {
        scanf("%d",&z);
        if(z<=x)
            continue;
        for(j=x;; j++)
        {
            if(sum<z)
            {
                sum=sum+j;
                m++;
            }
            else
                break;
        }
        break;
    }
    printf("%d\n",m);
}
