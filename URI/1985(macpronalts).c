#include<stdio.h>
int main()
{
    char num[5];
    int t,n;
    double sum=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",num,&n);
        if(num[3]=='1')
            sum=sum+(n*1.5);
        if(num[3]=='2')
            sum=sum+(n*2.5);
        if(num[3]=='3')
            sum=sum+(n*3.5);
        if(num[3]=='4')
            sum=sum+(n*4.5);
        if(num[3]=='5')
            sum=sum+(n*5.5);
    }
    printf("%.2lf\n",sum);

}
