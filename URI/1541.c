#include<stdio.h>
int main()
{
    int a,b,c,area,side;
    while(2)
    {
         scanf("%d",&a);
         if(a==0)
            break;
         scanf("%d %d",&b,&c);
    area=(a*b*100)/c;
    side=sqrt(area);
    printf("%d\n",side);
    }
}
