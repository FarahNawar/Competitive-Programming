#include<stdio.h>
int main()
{
    int min,a[1050],position=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            position=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d",min,position);
}
