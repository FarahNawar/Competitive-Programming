#include<stdio.h>
int main()
{
    int a[6],e=0,o=0,p=0,n=0,i;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            e++;
        }
        if(a[i]>0)
        {
            p++;
            if(a[i]%2==0)
        {
            e++;
        }
        if(a[i]%2==1)
        {
            o++;
        }
        }
        if(a[i]<0)
        {
            n++;
            if(a[i]*(-1)%2==0)
        {
            e++;
        }
        if(a[i]*(-1)%2==1)
        {
            o++;
        }

        }

    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
}
