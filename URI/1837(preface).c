#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,mod;
    scanf("%d %d",&a,&b);
    if(a<0)
    {
       mod=b-abs(a%b);
       printf("%d %d\n",(a-mod)/b,mod);
    }
    else
    {
        printf("%d %d\n",a/b,abs(a%b));
    }
}
