#include<stdio.h>
int main()
{
    int x,a,i;
    scanf("%d",&x);
    if(x%2==0)
    {
        for(a=1,i=x+1;a<=6;i+=2,a++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
         for(a=1,i=x;a<=6;i+=2,a++)
        {
            printf("%d\n",i);
        }
    }
}
