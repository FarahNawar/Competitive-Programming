#include<stdio.h>
int main()
{
    long int t,maxadrs,a;
    double b,max=0;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %lf",&a,&b);
        if(b>max)
        {
            max=b;
            maxadrs=a;
        }
    }
    if(max>=8)
        printf("%ld\n",maxadrs);
        else
        printf("Minimum note not reached\n");
}
