#include<stdio.h>
int main()
{
    int p,q,a[100],n=15,i,j=0,par[15],impar[15],c1=0,c2=0,c4,c3;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            par[c1]=a[i];
            c1++;
        }
        else
        {
            impar[c2]=a[i];
            c2++;
        }
    }
    i=0;
    p=0;
    c3=0;
    c4=0;
    while(j<n)
    {
        for(i=p;i<p+5;i++)
        {
            printf("par[%d] = %d\n",c3,par[i]);
            c3++;
            if(c3==5||p>c1)
            {
                c3=0;
                p=i;
                break;
            }

        }
        for(i=q;i<q+5;i++)
        {
            printf("impar[%d] = %d\n",c4,impar[i]);
            c4++;
            if(c4==5||q>c2)
            {
                c4=0;
                q=i;
                break;
            }
        }
        j++;
    }

}
