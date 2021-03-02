#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        scanf(":%d",&b);
        if((8-a)>1)
            printf("Atraso maximo: 0\n");
        else if((8-a)==1)
        {
            printf("Atraso maximo: %d\n",b);
        }
        else if(a-8==1)
        {
            printf("Atraso maximo: %d\n",120);
        }
        else
        {
            printf("Atraso maximo: %d\n",60+b);
        }
    }
}
