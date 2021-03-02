#include<stdio.h>
int main()
{
    long long int v,result,remainder[100],i=0,n;
    scanf("%lld",&v);
    result=v;
    while(result!=0)
    {
        remainder[i]=result%16;
        result=result/16;
        i++;
    }
    for(n=i-1; n>=0; n--)
    {
        if(remainder[n]<=9)
            printf("%lld",remainder[n]);
        else
        {
            switch(remainder[n])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
        }
    }
    printf("\n");

}
