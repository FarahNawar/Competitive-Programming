#include<stdio.h>
int main()
{
    int n,y,m,d,temp;
    scanf("%d",&n);
    y=n/365;
    temp=n%365;
    m=temp/30;
    d=temp%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
}
