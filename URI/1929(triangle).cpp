#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4],i,n=4,sum1,sum2;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+4);
    sum1=a[0]+a[1];
    sum2=a[1]+a[2];
    if(sum1>a[2]||sum2>a[3])
        printf("S\n");
    else
        printf("N\n");
}
