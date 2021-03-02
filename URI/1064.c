#include<stdio.h>
int main()
{
    float a[10],sum=0.00;
    int c=0,i;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>0)
        {
            sum=sum+a[i];
            c++;
        }
    }
    printf("%d valores positivos\n",c);
    printf("%.1f\n",sum/c);
}
