#include<stdio.h>
int main()
{
    long int n,t,i;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld",&n);
        if(n%2==0&&n>0)
            printf("EVEN POSITIVE\n");
        else if(n%2!=0&&n<0)
            printf("ODD NEGATIVE\n");
        else if(n%2==0&&n<0)
            printf("EVEN NEGATIVE\n");
        else if(n%2!=0&&n>0)
            printf("ODD POSITIVE\n");
            else
                printf("NULL\n");
    }
    }
