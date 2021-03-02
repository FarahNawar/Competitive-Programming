#include<stdio.h>
int main()
{
    int par[15],impar[15],i,n=15,a,c1,c2;
    for(c1=0,c2=0,i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            par[c1]=a;
            c1++;

        }
        if(a%2!=0)
        {
            impar[c2]=a;
            c2++;
        }
    }
    for(i=0;i<5;i++)
        printf("par[%d] = %d\n",i,par[i]);
    for(i=0;i<5;i++)
        printf("impar[%d] = %d\n",i,impar[i]);
    for(i=5;i<c2;i++)
                printf("impar[%d] = %d\n",i-5,impar[i]);
    for(i=5;i<c1;i++)
            printf("par[%d] = %d\n",i-5,par[i]);


}
