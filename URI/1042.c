#include<stdio.h>
int main()
{
    int a[10],t,i,j,b[10];
    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<3; i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n",b[i]);
    }

}
