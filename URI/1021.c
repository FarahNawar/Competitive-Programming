#include<stdio.h>
int main()
{
    double f,b[10]={100.00,50.00,20.00,10.00,5.00,2.00};
    int a,c,d,i,n[10]={50,25,10,5,1};
    scanf("%lf",&f);
    a=(int)f;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        d=a/(int)b[i];
        printf("%d nota(s) de R$ %.2f\n",d,b[i]);
        a=a%(int)b[i];
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n",a,1.00);
    c=(int)((f-(int)f)*100);
    for(i=0;i<5;i++)
    {
        d=c/n[i];
        printf("%d moeda(s) de R$ %.2f\n",d,(float)n[i]/100);
        c=c%n[i];
    }
}
