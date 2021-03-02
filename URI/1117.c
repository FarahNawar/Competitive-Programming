#include<stdio.h>
int main()
{
    float n[3],sum=0.0;
    int i=0;
    while(i<2)
    {
        scanf("%f",&n[i]);
        if(n[i]<0||n[i]>10)
        {
            printf("nota invalida\n");
            continue;
        }
            sum=sum+n[i];
            i++;
    }
    printf("media = %.2f\n",sum/2);
}
