#include<stdio.h>
int main()
{
    long int n,a,i;
    scanf("%ld",&n);
    for(i=0;;i++)
    {
        a=n*i+2;
         if(a>10000)
        break;
        printf("%d\n",a);

    }
}
