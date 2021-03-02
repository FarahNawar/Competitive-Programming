#include<stdio.h>
int main()
{
     long int N,h,m,s,tem;
    scanf("%ld",&N);
    h=N/3600;
    tem=N%3600;
    m=tem/60;
    s=tem%60;
    printf("%ld:%ld:%ld\n",h,m,s);

}
